#include<iostream>
using namespace std;

// double sum (double n){
//     if(n==0){
//         return 0;
//     }
//     else if (n==1){
//         return 1;
//     }
//     else{                           //using recursion
//         return n+sum(n-1);
//     }
// }

double sum(double n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{                        //using iteration  
        double sum = 0, i;
        for(i=0;i<=n;i++){
            sum+=i;
        }
        return sum;
    }
}
int main(){
    double n;
    cout << "Enter n = ";
    cin >>n;
    cout << "Sum of first " << n << " natural numbers = " << sum(n) << endl;
    return 0;
}