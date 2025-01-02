#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout << "Enter n = ";
    cin >> n;
    for(i=0;i<n;i++){                           //for loop to print upperhalf of the butterfly
        for(j=0;j<i+1;j++){                     //for loop to print upper left side of the butterfly
            cout << "*";
        }
        for(j=0;j<2*(n-i-1);j++){               //for loop to print space between the two wings of the upper butterfly
            cout << " ";
        }
        for(j=0;j<i+1;j++){                     //for loop to print upper right side of the butterfly        
            cout << "*";
        }
        cout << endl;
    }
    for(i=0;i<n;i++){                           //for loop to print lowerhalf of the butterfly
        for(j=0;j<n-i;j++){                     //for loop to print lower left side of the butterfly
            cout << "*";
        }
        for(j=1;j<2*i+1;j++){                   //for loop to print space between the two wings of the lower butterfly
            cout << " ";
        }
        for(j=0;j<n-i;j++){                     //for loop to print lower right side of the butterfly
            cout << "*";
        }
        cout << endl;
    }
}