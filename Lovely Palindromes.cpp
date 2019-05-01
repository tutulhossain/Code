#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n,t;
    int s,i;
    cin>>n;
    s=n.size();
   for(i=n.size()-1;i>=0;i--)
   {
       t.push_back(n[i]);
   }
   cout<<n+t<<endl;
    return 0;
}
