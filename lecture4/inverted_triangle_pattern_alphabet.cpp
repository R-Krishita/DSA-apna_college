#include<iostream>
using namespace std;
int main(){
    int i, j, n, ch = 65;
    cout << "Enter n = ";
    cin >> n;
    for (i=0;i<n;i++){             //outer loop = iterates n times and gives n number of rows
        for(j=0;j<i;j++){        //iterates i+1 times and gives i+1 number of columns or elements of each row (prints the space)
            cout << " ";
        }
        for(j=0;j<n-i;j++){      //iterates n-i times and gives n-i number of columns or elements of each row (prints the aplhabets)
            cout << char(ch+i);
        }
        cout <<endl;               //new line for each row
    }
    return 0;
}

// Output:
// Enter n = 4
// AAAA
//  BBB
//   CC
//    D