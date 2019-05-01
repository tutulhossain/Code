#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count,ck;
    int n;
    int arr[12]={1,2,4,8,16,32,64,128,256,512,1024,2048};
    cin>>t;
    while(t--)
    {
        ck=0;
        count=0;
        cin>>n;
        for(int j=11;j>=0;j--){
            if(n==0){
                break;
            }
            else if(arr[j]<=n){
                n=n-arr[j];
                count++;
                j++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
