#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,s,t;
    cin>>a>>b>>c>>d;
    if(c==d)
    {
        if(a>b)
            cout<<a-b<<"/"<<a<<endl;
        else
            cout<<b-a<<"/"<<b<<endl;
    }
    else
    {
        if(c>d)
            cout<<c-d<<"/"<<c<<endl;
        else
            cout<<d-c<<"/"<<d<<endl;
    }
    return 0;
}
