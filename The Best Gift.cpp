#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,m,n,x=0,co,s;
    cin>>m>>n;
    long long arr[m+1],temp[n+1]={0};
    for(i=0;i<m;i++)
    {
        cin>>arr[i];
        temp[arr[i]]=temp[arr[i]]+1;
    }
    sort(temp,temp+n+1,greater<long long>());
     for(i=0;i<=n+1;i++)
    {
        if(temp[i]<=1)
            break;
        else
            x=x+(temp[i]*(temp[i]-1))/2;
    }
    s=((m*(m-1))/2);
    cout<<s-x<<endl;
    return 0;
}
