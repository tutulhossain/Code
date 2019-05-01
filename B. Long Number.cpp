#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    string s;
    char arr[10];
    cin>>n;
    char ss[n];
    cin>>s;
    for(int i=1;i<=9;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        l=0;
        l = l * 10 + (s[i] - '0');
        if(s[i]<=arr[l])
            ss[i]=arr[l];
        else
            ss[i]=s[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<ss[i];
    }

    return 0;
}
