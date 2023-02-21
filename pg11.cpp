#include <iostream>
using namespace std;

int main() {
	int n,i,j,cnt=1;
	int inc=1;
	cout<<"\n enter n  = ";
	cin >> n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			cout<<" ";
		
		for(j=1;j<=n;j++)
			cout<<"*";
			
		cout<<endl;
	}
	
	
	
}
