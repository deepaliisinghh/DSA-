#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int p[n+1], result[n+1];

    for (int i=1;i<=n; i++)
    {
        cin>> p[i];
    }
    for (int i=1; i<=n;i++)
    {
        result[p[i]]=i;
    }
    for (int i=1; i<=n;i++){
    cout<<result[i] <<" ";
    }
    return 0;
}