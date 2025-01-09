#include<iostream>
#include<vector>
using namespace std;
void reverse_array(vector<int> &vec, int n){
    int start = 0, end = n - 1;
    while(start<end){
        swap(vec[start],vec[end]);
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
    vector<int> vec(n);
    for(i=0;i<n;i++){
        cout << "Enter element " << i+1 << "= ";
        cin >> vec[i];
    }
    reverse_array(vec,n);
    cout << "Reversed array is = ";
    for(i=0;i<n;i++){
        cout << vec[i] << " ";
    }
    cout << endl;

}