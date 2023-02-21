#include<iostream>

using namespace std;
int main()
{
	int n,i,j;
	cout<<"n = ";
	cin>>n;
	
	for(i=1;i<=2*n;i++)
	{
		for(j=1;j<2*n;j++)
		{
			if(i==n || j==n || i+j == n+1 ||j==n-1+i)
				cout<<"*";
			else
				cout<<" ";	
		}
		cout<<endl;	
	}	
	
}
