#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout << "Enter number of elements in the array = ";
    cin >> n;
    int nums[n], i;
    for (i = 0; i < n; i++){
        cout << "Enter number " << i + 1 << " = ";
        cin >> nums[i];
    }
    int smallest = INT_MAX, largest = INT_MIN;
    for (i = 0; i < n; i++){
        if (nums[i] > largest){
            largest = i;
        }
        else if(nums[i] < smallest){
            smallest = i;
        }
    }
    cout << "The index of the smallest number in the array is: " << smallest << endl;
    cout << "The index of the largest number in the array is: " << largest << endl;
    return 0;
}