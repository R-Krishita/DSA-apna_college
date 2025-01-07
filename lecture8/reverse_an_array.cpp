#include<iostream>
using namespace std;
void reverse_array(int arr[], int n){
    int start = 0, end = n - 1;
    while(start<end){
        swap(arr[start],arr[end]);
        // temp = arr[start];               //initialize temp variable
        // arr[start] = arr[end];
        // arr[end] = temp;
        start++;
        end--;
    }
}
int main(){
    int n, i;
    cout << "Enter elements of array = ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cout << "Enter element " << i+1 << "= ";
        cin >> arr[i];
    }
    reverse_array(arr,n);
    cout << "Reversed array is = ";
    for(i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}