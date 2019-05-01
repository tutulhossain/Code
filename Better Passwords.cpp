
#include <iostream>

using namespace std;

int main() {
	string s;
	cin>>s;
	int l=s.size();
	for(int i=0;i<l;i++)
	{
		if(s[i]=='s')
			s[i]='$';
		if(s[i]=='i')
			s[i]='!';
		if(s[i]=='o'){
			s[i]='()';
			l=l+1;
		}
	}
	s[l]='.';
	cout<<s<<endl;
	return 0;
}
