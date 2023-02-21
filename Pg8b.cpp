#include <iostream>
using namespace std;

int main() {
	int n,i,j,mid;
	cout<<"\n enter n  = ";
	cin >> n;
	
	mid = (n%2==0) ? n/2 : n/2+1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=mid;j++)
		{
			if(j==1 || i==j || i+j==n+1)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<"\n";
	}
}


