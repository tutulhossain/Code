#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,r,s;
    cin>>t;
    while(t--)
    {
        s=0;
        cin>>n;
        while(n!=0){
            r=n%10;
            n=n/10;
            s=s+r;
        }
        cout<<s<<endl;
    }
    return 0;
}
