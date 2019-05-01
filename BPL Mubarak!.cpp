#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        int co=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='O')
                co++;
        }
        if(co%6==0&&co/6>1)
            cout<<co/6<<" OVERS"<<endl;
        else if(co%6==0&&co/6==1)
            cout<<co/6<<" OVER"<<endl;
        else if(co<6)
            cout<<co<<" BALLS"<<endl;
        else if(co==1)
            cout<<co<<" BALL"<<endl;
        else if(co%6>1&&co/6>1)
            cout<<co/6<<" OVERS "<<co%6<<" BALLS"<<endl;
        else if(co%6==1&&co/6==1)
             cout<<co/6<<" OVER "<<co%6<<" BALL"<<endl;
        else if(co%6==1&&co/6>1)
            cout<<co/6<<" OVERS "<<co%6<<" BALL"<<endl;
        else
            cout<<co/6<<" OVER "<<co%6<<" BALLS"<<endl;
    }
    return 0;
}
