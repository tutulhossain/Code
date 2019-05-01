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
            r=n%10;
        while(n>=10)
        {
            n=n/10;
        }
        cout<<r+n<<endl;
    }
    return 0;
}
