#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,h,k,i,ans=0;
    cin>>w>>h>>k;
    for(i=0;i<k;i++)
    {
        ans=ans+(w*2)+(h-2)*2;
        w=w-4;
        h=h-4;
    }
    cout<<ans<<endl;
    return 0;
}
