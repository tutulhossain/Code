#include <bits/stdc++.h>

using namespace std;

int main() {
	int arr[101],temp[101],n,ck=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		temp[i]=arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		if(arr[i]==temp[i])
		ck=0;
		else{
            ck=1;
            break;
		}
	}
	if(ck==0)
        cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}
