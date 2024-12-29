#include<iostream>
using namespace std;
int main() {
    int i, n, flag=0;
    cout <<"Enter a number = ";
    cin >>n;
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
    return 0;
}

//detailed explanation of optimization
// n = 12
// factors :   1 x 12 = 12
//             2 x 6 = 12
//             3 x 4 = 12
//             4 x 3 = 12     repitition starts from here. so we can skip checking after 4 that means we can check until sqrt(n)
//             6 x 2 = 12
//             12 x 1 = 12