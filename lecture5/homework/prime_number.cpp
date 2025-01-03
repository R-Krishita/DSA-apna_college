#include<iostream>
using namespace std;
int prime(int n){
    int i,flag = 0;
    for (i=2;i*i<=n;i++){            //optimization: i*i<=n instead of i<n which checks until sqrt(n) 
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout << n << " is a prime number" <<endl;
    }
    else{
        cout << n << " is not a prime number" <<endl;
    }
}
int main() {
    int n;
    cout <<"Enter a number = ";
    cin >> n;
    prime(n);
    return 0;
}