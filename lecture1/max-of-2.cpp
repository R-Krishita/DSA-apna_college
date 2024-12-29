#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter a = ";
    cin >>a;
    cout << "Enter b = ";
    cin >>b;
    if(a>b){
        cout << "Maximum number = " << a << endl;
    }
    else{
        cout << "Maximum number = " << b << endl;
    }
    return 0;
}