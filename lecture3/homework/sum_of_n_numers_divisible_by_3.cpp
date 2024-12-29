#include<iostream>
using namespace std;
int main() {
    int n, i, sum = 0;
    cout << "Enter n = ";
    cin >>n;
    for(i=0;i<n;i++){
        if(i%3==0){
            sum+=i;
            i++;
        }
    }
    cout << "Sum of first " << n << " numbers divisible by 3 = " << sum << endl;
    return 0;
}