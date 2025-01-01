#include<iostream>
using namespace std;
int main() {
    int n, i, j;
    cout << "Enter n = ";
    cin >>n;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(j=0;j<i+1;j++){
            cout << j+1;
        }
        for(j=0;j<i;j++){
            cout << j+1;
        }
        cout << endl;
    }
}

// Output:
// Enter n = 4
//    1
//   121
//  12312
// 1234123