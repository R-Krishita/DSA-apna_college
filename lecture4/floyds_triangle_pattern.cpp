#include<iostream>
using namespace std;
int main(){
    int i, j, n, num =1;
    cout << "Enter n = ";
    cin >> n;
    for(i=0;i<n;i++){                   //outer loop = iterates n times and gives n number of rows
        for(j=i+1;j>0;j--){             //inner loop
            cout << num << " ";
            num++;
        }
        cout << endl;                   //new line for each row
    }
    return 0;
}

// Output:
// Enter n = 4
// 1 
// 2 3
// 4 5 6
// 7 8 9 10