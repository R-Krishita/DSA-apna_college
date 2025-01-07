#include<iostream>
#include<climits>
using namespace std;
int largest(int nums[], int n){
    int largest = INT_MIN, i;
    for(i=0;i<n;i++){
        if(nums[i]>largest){
            largest = nums[i];
        }
    }
    return largest;
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
    cout << "The largest number in the array is: " << largest(nums,n) << endl;
    return 0;
}