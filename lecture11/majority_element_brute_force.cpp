#include<iostream>
#include<vector>
using namespace std;
int majority_element(vector<int> &arr){
    int cnt = 0;
    for(int i = 0; i<arr.size();i++){
        for(int j = 0;j<arr.size();j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
        }
        if(cnt>arr.size()/2){
            cout << "Majority element is " << arr[i] << endl;
            return 0;
        }
    }
}
int main(){
    int n;
    cout << "Enter number of elements in the array = ";
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cout << "Enter element " << i+1 << " = ";
        cin >> arr[i];
    }
    majority_element(arr);
    return 0;
}