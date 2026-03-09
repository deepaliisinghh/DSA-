#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    int a[100005];

    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a, a + m);

    int ans=1e9;
     for(int i=0;i<= m-n;i++){
     int diff=a[i+n-1]-a[i];
     ans =min(ans,diff);
}
cout<<ans;
return 0;
}