#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,k,j,temp[99999],sub;
    k=1;
    for(i=3;i<=sqrt(99999);i++)
    {
        sub=0;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            sub=1;
           break;
        }
    }
    if(sub==0)
        {
            temp[k]=i;
            k++;
        }
    }
    for(i=1;i<999;i++)
    cout<<temp[i]<<endl;
    while(cin>>n&&n!=0&&n>=6)
    {
        b=0;
        for(i=1;i<=n;i++)
        {
            a=n-temp[i];
            for(j=i+1;j<=n;j++)
            {
                if(a==temp[j])
            {
                b=1;
                break;
            }
            }
            if(b==1)
            break;
        }
        if(b==1)
            {
                cout<<n<<" = "<<temp[i]<<" + "<<a<<endl;
            }
            else
                cout<<"Goldbach's conjecture is wrong."<<endl;
    }
    return 0;
}
