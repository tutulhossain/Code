#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,s=0;
    cin>>n>>m;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0;arr[i]<1&&i<m;i++)
    {
        s=s+arr[i];
    }
    cout<<abs(s)<<endl;
    return 0;
}
