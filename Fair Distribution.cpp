#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,res;
    cin>>x>>y;
    res=y/x;
    res=res+1;
    cout<<(res*x)-y<<endl;
    return 0;
}
