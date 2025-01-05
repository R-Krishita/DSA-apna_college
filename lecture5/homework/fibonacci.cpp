#include<iostream>
using namespace std;
int fibonacci(int n){
    int a=0,b=1,c, i;
    if(n==0){
        return a;
    }
    else if(n==1){
        return b;
    }
    else{
        for(i=2;i<=n;i++){
            c = a+b;
            a = b;
            b = c;
        }
        return c;
    }
}
int main(){
    int n, i;
    cout << "Enter n = ";
    cin >> n;
    for(i=0;i<n;i++){
        cout << fibonacci(i) << " ";
    }
    return 0;
}