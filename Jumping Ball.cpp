#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,c1=0,s=0;
    cin>>n;
    char arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]=='>')
        {
            if(c1>=1&&s==1)
                c1=c1+1;
            else{
            c1=i+1;
            s=1;
            }
        }
        else if(arr[i]=='<')
        {

            if(c1>=1&&s==1)
            c1=c1-1;
            else if(s==0)
                c1=i+1;
        }
    }
    cout<<c1<<endl;
    return 0;
}
