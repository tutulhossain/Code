#include<bits/stdc++.h>
using namespace std;
int main()
{
    int si,v,s,n,i,j,max1=0,max2=0;
    cin>>si>>n;
    int arr[si][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
    max1=arr[0][1];
    for(i=0;i<n;i++)
    {
        for(j=1;j<2;j++)
        {
            if(arr[i][j]>max1)
            {
                max2=max1;
                max1=arr[i][j];
            }

        }
    }
    cout<<max1+max2<<endl;
    return 0;
}
