#include<iostream>
using namespace std;
int sum_of_digits(int n){
    if (n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    // else{
    //     return n%10 + sum_of_digits(n/10);                  //using recursion
    // }
    else{
        int sum = 0;
        while (n>0){
            sum +=n%10;
            n = n/10;
        }
        return sum;
    }

}
int main(){
    int n;
    cout << "Enter n = ";
    cin >> n;
    cout << "Sum of digits of " << n << " = " << sum_of_digits(n) << endl;
    return 0;
}