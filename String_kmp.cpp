#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p;
    cin>>s>>p;
    vector<int>k;
    int t,i;
    k.push_back(0);
    for(i=1;i<p.size();i++){
        if(p[i]!=p[k[i-1]]){
            if(k[i-1]==0||p[i]==p[k[i-1]]){
                k.push_back(k[i-1]);
            }
        }
        else{
            k.push_back(k[i-1]+1);
        }
    }
    for(i=0;i<p.size();i++){
        cout<<k[i]<<" ";
    }
    return 0;
}
