#include<iostream>
using namespace std;
int main() {
    int i,j, n;
    cout << "Enter n = ";
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << "*";
        if(i!=0){
            for(j=0;j<2*i-1;j++){           //2*i-1 prints odd number of spaces in ascending order
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    for(i=0;i<n-1;i++){                     //this loop runs till n-2 hence i!=n-2 condition down there
        for(j=0;j<i+1;j++){
            cout << " ";
        }
        cout << "*";
        if(i!=n-2){
            for(j=0;j<2*(n-i-2)-1;j++){      //2*(n-i-2)-1 OR 2*(n-i)-5 prints odd number of spaces in descending order   
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }  
}