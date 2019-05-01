#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,c,d,a1;
    int t,i;
    cin>>t;
    while(1)
    {
        if(t==0)
            break;
        cin>>a>>b>>c>>d;

       while(1)
        {
        a=a-b;
        cout<<a<<" ";
        if(a==0)
        {
            cout<<"Yes"<<endl;
            break;
        }
      else if(a<c&&a>0)
      {
            a=a+d;
            a1=a;
      }
            cout<<a<<" ";
        if(a==a1)
        {
            cout<<"Yes"<<endl;
            break;
        }
            if(a<b){
            cout<<"No"<<endl;
            break;
        }

        }
        t--;
    }

    return 0;
}
