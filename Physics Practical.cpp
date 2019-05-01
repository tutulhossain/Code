#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int i,j,n,co=5000,mn=5000;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(mn>i+co)
        mn=i+co;
        co=0;
        for(j=n-1;j>=0;j--)
        {
            if((a[i]*2)<a[j])
                co++;
                else
                    break;
        }
    }
    cout<<mn-1<<endl;

    return 0;
}
