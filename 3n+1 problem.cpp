#include<iostream>
using namespace std;

int main()
{
    unsigned int i,j,i1,j1,t,s,count,count_max;
    unsigned int n;
    while(cin>>i>>j)
    {
        count_max=0;
        i1=i;
        j1=j;
    if(i1>j1)
    {
        s=i1;
        i1=j1;
        j1=s;
    }
    for(t=i1;t<=j1;t++)
    {
        n=t;
        count=0;
    while(n!=1)
    {
     if(n%2==0)
        n=n/2;
    else
        n=n*3+1;
    count++;
    }
    count++;
     if(count>=count_max)
    count_max=count;
}
cout<<i<<" "<<j<<" "<<count_max<<endl;
}
return 0;
}
