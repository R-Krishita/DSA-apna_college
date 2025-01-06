#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number to check if it is a power of 2 or not = ";
    cin >> n;
    if(n & (n-1)){
        cout << n << " is not a power of 2" <<endl;
    }
    else{
        cout << n << " is a power of 2" <<endl;
    }
}