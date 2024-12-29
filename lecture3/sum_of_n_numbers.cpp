#include<iostream>
using namespace std;
int main() {
    int n, sum = 0, i;
    cout << "Enter the value of n = ";
    cin >> n;
    for(i=0;i<=n;i++){
        sum+=i;
    }
    cout << "Sum of first " << n << " numbers = " << sum <<endl;
    return 0;
}