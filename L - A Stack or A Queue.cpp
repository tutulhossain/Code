#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,st,qe;
    cin>>t;
    while(t--)
    {
        st=0;
        qe=0;
        cin>>n;
        int s[n],s1[n],s2[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>s1[i];
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]==s1[i])
                qe=1;
                else{
                    qe=0;
                    break;
                }
        }
         for(int i=n-1,d=0;i>=0;i--,d++)
        {
            s2[d]=s1[i];
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]==s2[i])
                st=1;
                else
                {
                    st=0;
                    break;
                }
        }
        if(st==1&&qe==1)
            cout<<"both"<<endl;
        else if(st==1&&qe==0)
            cout<<"stack"<<endl;
        else if(st==0&&qe==1)
            cout<<"queue"<<endl;
        else
            cout<<"neither"<<endl;

    }
    return 0;
}
