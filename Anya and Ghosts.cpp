#include<iostream>
using namespace std;
int main()
{
    int arr[300];
    int i;
    int m,t,r,s,ans=0;
    cin>>m;
    cin>>t;
    cin>>r;
    for(i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    s=m*t*r;
    for(i=0;i<m;i++)
    {
        ans=ans+arr[i];
    }
        if(ans<=s)
        {
            cout<<r;
        }
        else
        cout<<"-1";
}
