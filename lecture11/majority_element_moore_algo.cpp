#include<iostream>
#include<vector>
using namespace std;
int majority_element(vector<int> &arr){
    int freq = 0;
    for(int i=0;i<arr.size();i++){
        if(freq==0){
            freq++;
        }
        else if(arr[i] == arr[i-1]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return freq;
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
    int freq = majority_element(arr);
    cout << "Majority element frequency = " << freq << endl;
    return 0;
}