#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long time[100005];
    for(int i=0;i<n;i++)
    {
        cin>>time[i];
    }
    long long minTime =time[0];
    int count=1;
    int index=0;
    for(int i=1;i<n;i++)
    {
        if(time[i]<minTime)
        {
            minTime = time[i];
            index =i;
            count =1;
        }
        else if(time[i]== minTime)
        {
            count++;
        }
    }
    if(count==1)
    {
        cout<<index+1;
    }
    else
    {
        cout<< "Still Rozdil";
    }
    return 0;
}