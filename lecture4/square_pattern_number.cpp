#include<iostream>
using namespace std;
int main() {
    int i, j , n;
    cout << "Enter n = ";
    cin >> n;
    for(i=1;i<=n;i++){            //outer loop = iterates n times and gives n number of rows
        for(j=1;j<=n;j++){        //inner loop = iterates n times and gives n number of columns or elements of each row
            cout << j << " ";
        }
        cout << endl;             //new line for each row
    }
    return 0;
}

// Output:
// Enter n = 4
// 1 2 3 4 
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4