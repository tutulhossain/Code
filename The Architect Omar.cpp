#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,b,k,l;
    cin>>t;
    while(t--)
    {
        b=0;
        k=0;
        l=0;
        cin>>n;
        string arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            string s=arr[i];
            if(s[0]=='b'||s[0]=='B')
                b++;
            else if(s[0]=='k'||s[0]=='B')
                k++;
            else
                l++;
        }
        b=b/2;
        if(b<=k||b<=l)
            cout<<b<<endl;
        else if(k<=b||k<=l)
            cout<<k<<endl;
        else
            cout<<l<<endl;
    }
    return 0;
}
