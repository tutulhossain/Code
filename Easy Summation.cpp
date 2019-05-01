#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,t,k,j;
    string sum,sm;
    cin>>t;
    while(t--)
    {

        sm='0';
        cin>>n>>k;
        for(i=1;i<=n;i++)
        {
            sum='1';
            for(j=1;j<=k;j++)
            {
               sum=sum"*"(i-'0');
            }
            sm=sm+sum;
        }
        cout<<sm<<endl;
    }
    return 0;
}
