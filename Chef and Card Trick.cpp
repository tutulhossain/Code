#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,n,x,l;
    vector<int>arr;
    cin>>t;
    while(t--)
    {
        arr.clear();
        j=9999;
        l=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            arr.push_back(x);
        }

         for(i=0;i<n;i++)
        {
            if(arr[i]>arr[i+1]&&i+1<n)
            {
                l++;
                j=arr[i];
                if(l==2)
                    break;
            }
        }
        if((l==2)||(l==1&&arr[0]<arr[n-1]))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
