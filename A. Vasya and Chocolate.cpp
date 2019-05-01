#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long t,s,a,b,c,i,ans,p;
    cin>>t;
    while(t--)
    {
        cin>>s>>a>>b>>c;
        i=(s/c)/a;
        p=(s/c)%a;
        ans=(a+b)*i;
        cout<<ans+p<<endl;
    }
    return 0;
}
