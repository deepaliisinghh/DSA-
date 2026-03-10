#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
    cin >>v[i];
}
vector<long long> prefix1(n+1,0);
for(int i=0;i<n;i++)
{
    prefix1[i+1]=prefix1[i]+v[i];
}
vector<long long> u=v;
sort(u.begin(), u.end());
vector<long long> prefix2(n+1,0);
for(int i=0;i<n;i++)
{
    prefix2[i+1]=prefix2[i]+u[i];
}
int m;
    cin >> m;
    while(m--) {
        int type, l, r;
        cin >> type >> l >> r;
        long long ans;
        if(type == 1) {
            ans = prefix1[r] - prefix1[l - 1];
        } else {
            ans = prefix2[r] - prefix2[l - 1];
        }
        cout << ans << "\n";
    }
    return 0;
}