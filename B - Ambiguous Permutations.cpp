#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ck;
    while(cin>>n)
    {
        ck=0;
        if(n==0)
            break;
        int arr[n];
        for(i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        for(i=1;i<=n;i++)
        {
            if(arr[arr[i]]!=i)
            {
                break;
            }
        }
        if(i!=n+1)
            cout<<"not ambiguous"<<endl;
        else
            cout<<"ambiguous"<<endl;

    }
    return 0;
}
