#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,b,ls;
    double rs,rs1;
    cin>>t;
    while(t--)
    {
        cin>>b>>ls;
        rs=sqrt(ls*ls-b*b);
        rs1=sqrt(b*b+ls*ls);
        cout<<rs<<" "<<rs1<<endl;
    }
    return 0;
}
