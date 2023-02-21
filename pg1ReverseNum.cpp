#include<iostream>
using namespace std;


int main()
{
	int n,r,rev =0;
	cout<<"\n Enter the n value = ";
	cin>>n;
	
	while(n>0)
	{
		r = n%10;
		rev = rev*10+r;
		n = n/10;
	}
	cout<<"\n Reveresed num = "<<rev;
}

/*
n = 1234       
rev = 0

        n%10
n       r        rev*10+r   	n=n/10
------------------------------------
1234    4         0+4 = 4   	123
123     3         40+3=43   	12
12      2         430+2=432 	1
1       1         4320+1=4321	0
0------------------------------------------
*/
