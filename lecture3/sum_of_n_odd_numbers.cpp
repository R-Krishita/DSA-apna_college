#include<iostream>
using namespace std;
int main() {
    int i, n, odd_sum = 0;
    cout <<"Enter n = ";
    cin >> n;
    for(i=0;i<n;i++){
        if(i%2!=0){
            odd_sum+=i;
        }
    }
    cout <<"Sum of first " << n << " odd numbers = " << odd_sum << endl;
    return 0;
}