#include<iostream>
using namespace std;

int main(){
	
	int n,i,j,cnt=1;
	cout<<"enter a number\n";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<cnt++<<"\t";
		}
		cout<<"\n";
	}
}
