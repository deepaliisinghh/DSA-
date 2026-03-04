#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;

    long long a[100005];

    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     sort(a,a+n);
    
     int q;
     cin>>q;

     while(q--){
        long long x;
        cin>>x;

        int count = upper_bound(a,a+n,x)-a;

        cout<<count<<endl;
     }
     return 0;
}