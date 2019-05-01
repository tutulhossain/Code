#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count;
    string n;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n;
        for(int i=0;i<n.size();i++)
        {
            if(n[i]=='4')
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
