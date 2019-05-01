#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,c[100001],s,r,ans;
    cin>>t;
    while(t>0)
    {
        ans=0;
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            cin>>c[i];
        }
        for(i=0;i<n;i++)
        {
            if(c[i]%m==0)
            s=c[i]/m;
            else
                s=c[i]/m+1;
            r=s*m;
            ans=ans+(r-c[i]);
        }
        cout<<ans<<endl;
        t--;
    }
    return 0;
}
