#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long k;
    cin>>n>>k;


    vector<long long>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    int midIndex =n/2;

    long long low= a[midIndex];
    long long high=a[midIndex]+k;
    long long ans=a[midIndex];

    while(low <=high){
        long long mid= (low+high)/2;
        long long operations=0;

        for(int i=midIndex;i<n;i++){
        if (a[i]<mid){
            operations += (mid-a[i]);
        }
    }
    if(operations <=k)
    {
        ans=mid;
        low=mid+1;
    }
    else
    {
        high =mid-1;
    }
}
cout<<ans<<"\n";
return 0;


}