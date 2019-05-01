#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,e=0,s=0;
    cin>>n>>m>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(int i=0;i<n;i++)
    {
        if(arr[i]>m){
            e++;
        }
        if(arr[i]==m)
            s=1;
    }
   if(e > k)
       cout << "NO" << endl;
   else if(e < k)
       cout << "YES" << endl;
   else{

       if(s == 1 || k >= 1)
           cout << "YES" << endl;
       else
           cout << "NO" << endl;
   }
    return 0;
}
