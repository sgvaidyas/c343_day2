#include <iostream>
using namespace std;

int main() {
	int n,i,j,cnt=1;
	int inc=1;
	cout<<"\n enter n  = ";
	cin >> n;
	
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i+1;j++)
		{
			cout<<cnt<<"\t";
			if(j!=n-i+1)
				cnt = cnt+inc;
		}
		inc = inc*-1;
		cnt+=1;
		cout<<endl;
	}
	
}







