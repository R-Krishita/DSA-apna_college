#include<iostream>
using namespace std;
int main() {
    int i = 0, n;
    cout << "Enter n= ";
    cin >> n;

    //syntax for while loop
    while (i < n){
        cout << "value of i (using while loop)= " << i << endl;
        i++;
    }

    //syntax for FOR loop
    for (i = 0; i < n; i++){
        cout <<"Value of i (using for loop)= " << i << endl;
    }

    //syntax for do-while loop
    do{
        cout <<"Value of i (using do-while loop)= " << i << endl;
        i++;
    }while(i<=n);
    return 0;
}