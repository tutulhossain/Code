#include<iostream>
using namespace std;
int main()
{
    int m,n,i,a,ar[110],arr[110],temp[110],j,k,l,flag,fla;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        flag=1;
        fla=1;
        cin>>m;
        for(j=1,a=m;j<=m,a>=1;j++,a--)
        {
            cin>>ar[j];
            temp[a]=ar[j];
        }
         for(j=1;j<=m;j++)
        {
            cin>>arr[j];
        }
        for(j=1;j<=m;j++)
        {
        if(arr[j]!=temp[j])
        {
            flag=0;
        }
        if(arr[j]!=ar[j])
        {
            fla=0;
        }
        }
        if(flag==1&&fla==0)
        cout<<"stack"<<endl;
        else if(flag==0&&fla==1)
        cout<<"queue"<<endl;
        else if(flag==1&&fla==1)
        cout<<"both"<<endl;
        else
        cout<<"neither"<<endl;

    }
    return 0;
}
