#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	int n,m,dig_n,dig_m,sum=0,cnt=0;
	cout<<"enter a number\n";
	cin>>n;
	cout<<"enter a number\n";
	cin>>m;
	int temp,temp2;
	dig_n = int(log10(n) + 1);
	dig_m = int(log10(m) + 1);
	
	int mid = (dig_n<dig_m)?dig_n:dig_m;
	while(mid>0){ 
		temp = n / int(pow(10, dig_n-1)); 
		sum= sum*10 + temp;
		
		temp2 = m / int(pow(10, dig_m-1));
		sum= sum*10 + temp2;
		
		n = n % int(pow(10, dig_n-1)); 
		m = m % int(pow(10, dig_m-1));
		
		dig_n--;
		dig_m--;
		mid--;
		//cout<<sum<<"\t n = "<<n<<"\t m = "<<m<<"\t mid = "<<mid<<endl;
	}
	//n = 56  sum = 123456
	if(dig_n>dig_m)
	{
		int x = int(log10(n) + 1);
		sum = sum * int(pow(10,x)) + n;	//sum = 123456*100= 12345656
	}
	else if(dig_n<dig_m)
	{
		int x = int(log10(m) + 1);
		sum = sum * int(pow(10,x)) + m;	//sum = 123456*100= 12345656
	}
	
	cout<<sum<<endl;
	return 0;
}
