#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,d;
        double i,j;
        cin>>a>>b>>c>>d;
        i=b*log(a);
        j=d*log(c);
        if(i<j)
            cout<<"<"<<endl;
        else
            cout<<">"<<endl;
    }
    return 0;
}
