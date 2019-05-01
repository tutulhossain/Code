#include<iostream>
using namespace std;
int check(int d,int i)
{
    int n=0;
    while(d!=0)
    {
        n=n+d%i;
        d=d/i;
    }
    return n;
}
int main()
{
    int m,s1,s2,s3;
    for(m=2992;m<=9999;m++)
    {
        s1=check(m,10);
        s2=check(m,12);
        s3=check(m,16);
        if(s1==s2&&s1==s3)
    {
        cout<<m<<endl;
    }
    }
    return 0;
}
