#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,k,w,i,t;
    cin>>t;
    while(t>0)
    {
        cin>>c>>k>>w;
        if(c*w<=k)
        {
            cout<<"yes"<<endl;
        }
        else
            cout<<"no"<<endl;
        t--;
    }
    return 0;
}
