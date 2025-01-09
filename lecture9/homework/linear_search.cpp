#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> &vec, int n, int target){
    int i;
    for(i=0;i < n;i++){
        if(vec[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> vec(n);
    int i,target;
    for(i=0;i < n;i++){
        cout << "Enter element " << i+1 << " = ";
        cin >> vec[i];
    }
    cout << "Enter number you want to search = ";
    cin >> target;
    int index = search(vec, n, target);
    if (index != -1) {
        cout << "The number " << target << " is at index " << index << endl;
    } else {
        cout << "The number " << target << " is not in the array" << endl;
    }
    return 0;
}