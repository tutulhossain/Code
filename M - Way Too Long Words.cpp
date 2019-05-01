#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ck;
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        ck=s.size();
        if(ck>10)
        {
            cout<<s[0]<<ck-2<<s[ck-1]<<endl;
        }
        else
            cout<<s<<endl;
    }
    return 0;
}
