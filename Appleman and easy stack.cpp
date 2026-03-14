#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>grid(n);
    for(int i=0;i<n;i++)
    cin>>grid[i];

    int dx[4]={1,-1,0,0};
    int dy[5]={0,0,1,-1};

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            int cnt=0;
            for (int k=0;k<4;k++){
                int nx=i+dx[k];
                int ny=j+dy[k];
                if(nx>=0 && nx<n && ny>=0 && ny<n)
                if (grid[nx][ny]=='o')
                cnt++;
            }
            if(cnt%2!=0){
                cout<<"NO \n";
                return 0;
            }
        }
    }
    cout<<"YES \n";
}