#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t],b[t],c[t],i,d[t];
    for(i=0;i<t;i++)
    {
    cin>>a[i];
    cin>>b[i];
    cin>>c[i];
    if(a[i]>b[i]&&a[i]>c[i])
    {
        d[i]=c[i];
        c[i]=a[i];
        a[i]=d[i];
    }
    else if(b[i]>a[i]&&b[i]>c[i])
    {
        d[i]=c[i];
         c[i]=b[i];
         b[i]=d[i];
    }
    else
    {
        a[i];
        b[i];
        c[i];
    }
    }
    for(i=0;i<t;i++)
    {
    if(a[i]*a[i]+b[i]*b[i]==c[i]*c[i])
    cout<<"Case "<<i+1<<": yes"<<endl;
    else
    cout<<"Case "<<i+1<<": no"<<endl;
    }
    return 0;
}
