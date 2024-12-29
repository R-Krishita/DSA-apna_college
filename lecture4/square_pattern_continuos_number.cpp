#include<iostream>
using namespace std;
int main(){
    int i, j, n, num=1;
    cout << "Enter n = ";
    cin >>n;
    for(i=0;i<n;i++){               //outer loop = iterates n times and gives n number of rows
        for(j=0;j<n;j++){           //inner loop = iterates n times and gives n number of columns or elements of each row
            cout << num << " ";
            num++;
        }
        cout << endl;               //new line for each row
    }
}

// Output:
// Enter n = 3
// 1 2 3
// 4 5 6
// 7 8 9