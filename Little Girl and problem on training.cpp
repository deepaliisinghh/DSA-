#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[100005];
    for(int i=0;i<n;i++){
    cin>>a[i];

}
int count =0;
for(int i=1;i<n;i++)
{
    if(a[i]<=a[i-1])
    {
        count++;
        if(count>1)
        {
            cout<<"No";
            return 0;
        }
        if(i>1 && a[i]<= a[i-2])
            a[i]=a[i-1];
        


    }

}
cout<<"Yes";
}