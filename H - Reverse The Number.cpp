#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,r,s;
    string n;
    cin>>t;
    while(t--)
    {
        s=0;
        cin>>n;
        reverse(n.begin(),n.end());
        while(n[s]=='0'){
        s=s+1;
        }
        for(int i=s;i<n.size();i++)
        {
            cout<<n[i];
        }
        cout<<endl;
    }
    return 0;
}
