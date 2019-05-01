#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {
        int res;
        cin>>x>>y;
        res=(x+y)/2;
        if(res%2==0)
            cout<<"Sadia will be happy."<<endl;
        else
            cout<<"Oops!"<<endl;
    }
    return 0;
}
