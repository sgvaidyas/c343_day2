#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"enter a number\n";
	cin>>n;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i==1 || j==1 || i+j == n+1)
				cout << "*\t";
			else
				cout<<" \t";
		}
		cout << endl;
	}
	
} 
