#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned m,n,i,j,s,a,k;
    int t,c=0;
    cin>>t;
    while(t>0)
    {
        s=0;
        cin>>m>>n;
        for(i=m;i<=n;i++)
        {
            k=i;
            if(k==0)
                s++;
            while(k>0)
            {
            if(k%10==0)
                    s++;
                k=k/10;
            }
        }
        cout<<"Case "<<++c<<": "<<s<<endl;
        t--;
    }
    return 0;
}
