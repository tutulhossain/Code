#include <iostream>

using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=a;i>0;i--)
	{
		if(a%i==0)
			cout<<a/i<<endl;
	}
	return 0;
}
