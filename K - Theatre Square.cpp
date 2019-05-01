#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,a,row,column;
    cin>>m>>n>>a;
    row=m/a;
    if(m%a!=0)
        row++;
    column=n/a;
    if(n%a!=0)
        column++;
    cout<<row*column<<endl;
    return 0;
}
