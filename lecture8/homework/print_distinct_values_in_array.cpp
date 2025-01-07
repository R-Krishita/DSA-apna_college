#include<iostream>
using namespace std;
int main(){
    int n, i, j, count;
    cout << "Enter number of elements in the array = ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cout << "Enter element " << i+1 << " = ";
        cin >> arr[i];
    }
    cout << "Array with unique elements are : ";
    for(i=0;i<n;i++){
        count = 0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}