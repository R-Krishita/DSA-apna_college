#include<iostream>
using namespace std;
int decimal_to_binary(int n){
    int binary = 0, power = 1, remainder;

    while(n > 0){
        remainder = n%2;
        n = n/2;
        binary += remainder* power;
        power*=10;
    }
    return binary;
}
int main(){
    int n;
    cout << "Enter decimal number = ";
    cin >> n;
    cout << decimal_to_binary(n) <<endl;
    return 0;
}