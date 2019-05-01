#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,i,l,ans,test,c=1;
    vector< int > arr;
        while(cin>>s>>t)
    {
        ans=0;
        test=0;
        l=0;
        if(s==0&&t==0)
        break;
        for(i=2;i<s;i++)
        {
            if(s%i==0)
            {
                arr.push_back(i);
            }
        }
        for(i=arr.size()-1;i>=0;i--)
        {
            if((t-s)%arr[i]==0)
            {
               ans=(t-s)/arr[i];
               test=1;
               break;
            }
        }
        if(test==1||s==t)
        cout<<"Case "<<c<<": "<<ans<<endl;
        else
            cout<<"Case "<<c<<": -1"<<endl;
        c++;
    }

    return 0;
}
