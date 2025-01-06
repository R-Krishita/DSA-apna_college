#include<iostream>
using namespace std;
int reverse(int n){
    int i, reverse = 0;
    while(n>0){
        i = n%10;
        reverse = reverse*10 +  i;
        n = n/10;
    }
    return reverse;
}
int main(){
    int n;
    cout << "Enter a number to reverse = ";
    cin >> n;
    cout << reverse(n) << endl;
}