#include<iostream>
using namespace std;
int main(){
    int i, j, n;
    cout << "Enter n = ";
    cin >> n;
    for(i=0;i<n;i++){                   //outer loop = iterates n times and gives n number of rows     
        for(j=0;j<n;j++){               //inner loop = iterates n times and gives n number of columns or elements of each row
            cout << char(65 + j) << " ";
        }
        cout << endl;                   //new line for each row
    }
    return 0;
}

// Output:
// Enter n = 4
// A B C D 
// A B C D
// A B C D
// A B C D