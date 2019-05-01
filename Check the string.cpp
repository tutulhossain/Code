#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string ss;
    int n,l,i,c1=0,c2=0,c3=0;
    cin>>s;
    ss=s;
    l=ss.size();
    sort(ss.begin(),ss.end());
    if(ss==s)
    {
        for(i=0;i<l;i++)
        {
            if(s[i]=='a')
                c1++;
            if(s[i]=='b')
                c2++;
            if(s[i]=='c')
                c3++;
        }
        if(c1>0&&c2>0&&c3>0&&(c1==c3||c2==c3))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
