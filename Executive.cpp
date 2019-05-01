#include<iostream>
using namespace std;
int main()
{
    int a[19],b[19],c[19],t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a[i];
        cin>>b[i];
        cin>>c[i];
    }
      for(i=0;i<t;i++)
    {
        if(b[i]>a[i]&&a[i]>c[i]||a[i]>b[i]&&a[i]<c[i])
        cout<<"Case "<<i+1<<": "<<a[i]<<endl;
        else if(a[i]<b[i]&&b[i]<c[i]||a[i]>b[i]&&b[i]>c[i])
        cout<<"Case "<<i+1<<": "<<b[i]<<endl;
        else
        cout<<"Case "<<i+1<<": "<<c[i]<<endl;
    }
    return 0;
}
