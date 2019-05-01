#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,co;
    cin>>t;
    while(t--)
    {
        co=0;
        cin>>n>>k;
        int arr[n+1];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());
        for(i=0;i<n;i++)
        {
            if(arr[k-1]<=arr[i])
                co++;
                else
                    break;
        }
        cout<<co<<endl;
    }
    return 0;
}
