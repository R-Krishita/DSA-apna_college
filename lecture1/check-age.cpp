#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter your age = ";
    cin >> age;
    if(age>=18){
        cout << "You are eligible to get a driving license" << endl;
    }
    else{
        cout << "You are not eligible to get a driving license" << endl;
    }
    return 0;
}