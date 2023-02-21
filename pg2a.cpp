#include <iostream>
using namespace std;
int main() {
    int x,count = 0;
    cout<<"Enter a number: ";
    cin>>x;
    count = x;
    while (x>0){
    while(count>0){
        cout<<count<<" ";
        count-=1;
    }
        x-=1;
        cout<<"\n";
        count = x;
    }
}
