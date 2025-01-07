#include<iostream>
using namespace std;
int main(){
    int n, i, target;
    bool found = false;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int nums[n];
    for(i=0;i<n;i++){
        cout << "Enter element " << i+1 << "= ";
        cin >> nums[i];
    }
    cout << "Enter the number you want to search for = ";
    cin >> target;
    for(i=0;i<n;i++){
        if(nums[i] == target){
            cout << "The number " << target << " is at index " << i << endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout << "The number " << target << " is not in the array" << endl;
    }
    return 0;
}