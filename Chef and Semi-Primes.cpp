#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,l,k,s,j,arr[23]={2,3,5,7,11,13,17,19,23,29,31,43,47,53,59,61,67,71,73,79,83,89,97};
    vector<int>temp;
     for(i=0;i<23;i++)
        {
            for(j=i+1;j<23;j++)
            {
               if((arr[i]*arr[j])<200)
               {
                    temp.push_back(arr[i]*arr[j]);
               }
               else
                break;
            }
        }
        k=temp.size();
        sort(temp.begin(),temp.end());
    cin>>t;
    while(t--)
    {
        s=0;
        cin>>n;
        for(i=0;i<k;i++)
        {
            for(j=i;j<k;j++)
            {
                if((temp[i]+temp[j])==n)
                {
                    cout<<"YES"<<endl;
                    s=1;
                    l=0;
                    break;
                }
                else
                    l=1;
            }
            if(s==1)
                break;
        }
        if(l==1)
            cout<<"NO"<<endl;
    }
    return 0;
}
