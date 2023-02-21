#include<iostream>

using namespace std;
int main(){
    int i, j, n;
    cout << "input number: " << endl;
    cin >> n;
    for (i = 1; i < 2*n; i++){
        for (j = 1; j < 2*n; j++){
            if(!(i+j>=n+2 && i+j <= 3*n-2 && abs(j-i) < n-1 )){
                cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
    }
}
