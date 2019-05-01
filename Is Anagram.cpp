#include <iostream>

using namespace std;

int main() {
	string a,b;
	int co=0,l=0;
	cin>>a>>b;
	for(int i=0;i<a.size();i++)
	{
		for(int j=0;j<b.size();j++)
		{
			if(a[i]==b[j]&&a.size()==b.size()){
				co++;
				l=0;
				break;
			}
			else
			{
				l=1;
			}
		}
		if(l==1)
			break;
	}
	if(l==1)
		cout<<"No"<<endl;
	else
		cout<<"Yes"<<endl;
	return 0;
}
