#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,i,j,l,co,co1,co2,co3;
    cin>>t;
    string arr;
    while(t>0)
    {
        co=1;
        cin>>arr;
        l=0;
         for(j=0;j<10;j++)
        {
        for(i=l;i<10;i++)
        {
            int a=arr[i]-'0';
            int b=arr[i+1]-'0';
            if(a+1==b)
            {
                co++;
                l++;
                if(co==4)
                    break;
            }
            else
            {
                l++;
                co=1;
            }

        }
        if(co==4)
        break;
        }
        if(co==4)
        cout<<"Fancy"<<endl;
        else
        {
            co1=1;
            l=0;
        for(i=l;i<10;i++)
        {
            int a=arr[i]-'0';
            int b=arr[i+1]-'0';
            if(a==b)
            {
                co1++;
                l++;
                if(co1==3)
                    break;
            }
            else
            {
                l++;
                co1=1;
            }

        }
        if(co1==3)
            cout<<"Fancy"<<endl;
            else
            {
            co2=0;
            l=0;
        for(i=l;i<10;i++)
        {
            int a=arr[i]-'0';
            int b=arr[i+1]-'0';
            if(a==b)
            {
                co2++;
                l=l+2;
                if(co2==2)
                    break;
            }
            else
            {
                l++;
            }
        }

        if(co2==2)
            cout<<"Fancy"<<endl;
            else
            {
            co3=1;
            for(j=0;j<10;j++)
            {
        for(i=j+1;i<10;i++)
        {
            int a=arr[i]-'0';
            int b=arr[i+1]-'0';
            if(a==b)
            {
                co3++;
                if(co3==5)
                    break;
            }
        }
        if(co3==5)
            break;
            }
        if(co3==5)
            cout<<"Fancy"<<endl;
            else
            {
                cout<<"Not Fancy"<<endl;
            }
            }
            }
        }
        t--;
    }
    return 0;
}
