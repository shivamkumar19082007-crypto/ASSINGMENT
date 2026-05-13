#include <iostream>
using namespace std;
int main() {
	int l;
	cin>>l;
	int r;
	cin>>r;
	int x;
	for(int i=l+1;i<=r;i++){
		x=l^i;
	}
	if(x%2==0)
	cout<<"even"<<endl;
	else
	cout<<"odd";
	}
