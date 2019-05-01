#include <bits/stdc++.h>

using namespace std;

int main() {
	string s,r;
	cin>>s;
	r=s;
	reverse(s.begin(), s.end());
	if(s==r)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}
