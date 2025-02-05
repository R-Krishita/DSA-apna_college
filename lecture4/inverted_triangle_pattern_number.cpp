#include<iostream>
using namespace std;
int main(){
    int i, j, n;
    cout << "Enter n = ";
    cin >> n;
    for (i=0;i<n;i++){             //outer loop = iterates n times and gives n number of rows
        for(j=0;j<i;j++){        //iterates i+1 times and gives i+1 number of columns or elements of each row
            cout << " ";
        }
        for(j=0;j<n-i;j++){      //iterates n-i times and gives n-i number of columns or elements of each row
            cout << i+1;
        }
        cout <<endl;               //new line for each row
    }
    return 0;
}

// Output:
// Enter n = 4
// 1111
//  222
//   33
//    4


// same program can also print this pattern by changing line 12 to cout << i+1 << " ";
// Output:
// Enter n = 4
// 1 1 1 1
//  2 2 2
//   3 3
//    4
