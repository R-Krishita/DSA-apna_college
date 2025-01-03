#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}
int main(){
    int n,r, binomial_coefficient;
    cout << "Enter n = ";
    cin >> n;

    cout << "Enter r = ";
    cin >>r;
    if (r>n){
        cout << "r cannot be greater than n";
    }
    else{
        binomial_coefficient = factorial(n)/ (factorial(r) * factorial (n-r));
    }
    cout << "Binomial Coefficient of " << n << " and " << r << " = " << binomial_coefficient << endl;
    return 0;
}