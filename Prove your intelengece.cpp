#include<iostream>
using namespace std;
int main()
{
    int t,a[125],b[125],i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
     for(i=0;i<t;i++)
    {
       cout<<"Case "<<i+1<<": "<<a[i]+b[i]<<endl;
    }
    return 0;
}
