#include<iostream>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;

    int c1 = n*a;
    int c2 = (n/m)*b + (n%m)*a;
    int c3= ((n/m)+(n%m!=0?1:0))*b;
    int ans =min (c1,min(c2,c3));
    cout<<ans;
}
