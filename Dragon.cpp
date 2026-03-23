#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;

    vector<pair<int,int>> dragon(n);

    for (int i=0;i<n;i++)
    {
        cin>>dragon[i].first>>dragon[i].second;
    }
    sort(dragon.begin(), dragon.end());
    for(int i=0;i<n;i++)
    {
        if(s>dragon[i].first){
            s +=dragon[i].second;
        }
        else{
            cout<<"NO";
            return 0;
        }

    }
    cout<<"YES";
    return 0;
}