#include<iostream>
#include<vector>
using namespace std;
int pairSum(vector <int> &arr, int targetSum){
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==targetSum){
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}
int main(){
    int n;
    cout << "Enter number of elements in the array = ";
    cin >> n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cout << "Enter Element " << i+1 << "= ";
        cin >> arr[i];
    }
    int targetSum;
    cout << "Enter target sum = ";
    cin >> targetSum;
    pairSum(arr, targetSum);
    return 0;
}