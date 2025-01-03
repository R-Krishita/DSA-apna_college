#include<iostream>
using namespace std;

// int factorial(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     else{
//         return n * factorial (n-1);             //using recursion
//     }
// }

int factorial(int n){
    if (n==0 || n==1){
        return 1;
    }
    else {
        int fact = 1, i;                        //using iteration
        for(i=1;i<=n;i++){
            fact *=i;
        }
        return fact;
    }
}
int main(){
    int n;
    cout << "Enter n = ";
    cin >> n;
    cout << "Factorial of " << n << " = " << factorial(n) << endl;
    return 0;
}