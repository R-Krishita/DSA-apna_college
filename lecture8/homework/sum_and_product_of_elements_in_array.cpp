#include<iostream>
using namespace std;
int sum(int arr[], int n){
    int sum = 0, i;
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int product(int arr[], int n){
    int product = 1, i;
    for(i=0;i<n;i++){
        product *= arr[i];
    }
    return product;
}
int main(){
    int n, i;
    cout << "Enter number of elements in the array = ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cout << "Enter element " << i+1 << " = ";
        cin >> arr[i];
    }
    cout << "Sum of all the elements of the array = " << sum(arr,n) << endl;
    cout << "Product of all the elements of the array = " << product(arr,n) << endl;
}