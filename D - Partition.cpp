#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j;
    cin>>n>>m;
    for(i=n-1;i>=0;i--)
    {
        if(m%n==0)
        {
            cout<<m/n<<endl;
            break;
        }
        else if(m%i==0)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
