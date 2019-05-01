#include <iostream>

using namespace std;

int main() {
    int n,arr[52];
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<50;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    cin>>n;
    cout<<arr[n-1]<<endl;
	return 0;
}
