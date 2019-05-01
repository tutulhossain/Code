#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    char s[n];
    for(i=0;i<n;i++);
    {
        cin>>s[i];
    }
    int co=0;
    for(i=0;i<n;i++);
    {
        for(int j=0;j<n;j++)
    {
        if(s[i]==s[j])
            co++;
    }
    co--;
    } cout<<co<<endl;
    if(co>n/2)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(i=0;i<4;i++)
        cout<<s[i];
    }
    return 0;
}
