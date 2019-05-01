#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j,k;
    vector<long>arr;
    for(i=2;i<=1299709;i++)
    {
        k=1;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                k=0;
                break;
            }
            else
               k=1;
        }
        if(k==1)
        {
             arr.push_back(i);
        }
    }
    cin>>t;
    while(t--)
    {
       cin>>n;
       cout<<arr[n-1]<<endl;
    }
    return 0;
}
