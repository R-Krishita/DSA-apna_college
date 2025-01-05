#include<iostream>
using namespace std;
int binary_to_decimal(int n){
    int decimal = 0, power = 1, remainder;
    while(n>0){
        remainder = n%10;
        decimal += remainder*power;
        n = n/10;
        power*=2;
    }
    return decimal;
}
int main(){
    int n;
    cout << "Enter binary number = ";
    cin >> n;
    cout << binary_to_decimal(n) <<endl;
    return 0;
}