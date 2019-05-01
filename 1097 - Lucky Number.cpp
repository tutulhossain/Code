#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,j,i,an,s,a,store;
    cin>>t;
    while(t--)
    {
       cin>>n;
       a=1;
        vector<int>arr;
        for(i=1;i<=100;i++)
        {
            arr.push_back(i);
        }
       int k=0;
       while(k<=arr.size()){
    j=arr[k];
    cout<<j<<" ";
    i=0;
    s=0;
    while(s<=arr.size()){
            i++;
            arr.erase(arr.begin()+(i*j-s-1-k));
            s++;
    }
    k++;
        }
        for(int k=0;k<arr.size();k++)
        {
            cout<<arr[i]<<" ";
        }
    }
}
