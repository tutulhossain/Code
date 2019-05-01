#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string a,b,t,u;
    int m,n,c,d,f=0;
    cin>>a>>b;
    m=a.size();
    n=b.size();
    for(int i=m-1,j=n-1;i>=0,j>=0;i--,j--)
    {
        t=a[i];
        u=b[j];
        c=atoi(t.c_str());
        d=atoi(u.c_str());
        if(c+d>9){
            cout<<"Yes"<<endl;
            f=0;
            break;
        }
        else
            f=1;
    }
    if(f==1)
        cout<<"No"<<endl;
	return 0;
}
