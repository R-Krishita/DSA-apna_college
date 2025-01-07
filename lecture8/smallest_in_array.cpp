#include<iostream>
#include <climits>
using namespace std;
int smallest(int nums[], int n){
    int smallest = INT_MAX, i;
    for(i=0;i<n;i++){
        if(nums[i]<smallest){
            smallest = nums[i];
        }
    }
    return smallest;
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int nums[n], i;
    for(i=0;i<n;i++){
        cout << "Enter number " << i+1 << "= ";
        cin >> nums[i];
    }
    cout << "The smallest number in the array is: " << smallest(nums, n) << endl;
    return 0;
    
}