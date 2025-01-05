#include<iostream>
using namespace std;
int prime(int n){
    int i,flag = 0;
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            flag = 1;
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
int main(){
    int n, i;
    cout << "Enter n = ";
    cin >> n;
    if(n==0 || n==1){
        cout << n << " is neither a prime number nor composite number" <<endl;
    }
    for(i=2;i<=n;i++){
        prime(i);
    }
    return 0;
}