#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int subarray_sum(vector<int> &vec , int n){
    int i, max_sum = INT_MIN, current_sum = 0;
    for(i=0;i<n;i++){
        current_sum += vec[i];
        max_sum = max(current_sum,max_sum);
        if(current_sum < 0){
            current_sum = 0;
        }
    }
    return max_sum;
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> vec(n);
    int i;
    for(i=0;i < n;i++){
        cout << "Enter element " << i+1 << " = ";
        cin >> vec[i];
    }
    int sum = subarray_sum(vec,n);
    cout << "Maximum subarray sum = " << sum << endl;
    return 0;
}


//Logic of kadane's algorithm:
// Initialize maxSum to -ve infinity(INT_MIN) and currentSum = 0
//*** kadane's algo says that if the currentSum becomes negative, then it should be reset to 0 since the sum of a positive and negative will only decrease the resultant value.
        //   positive + positive = positive
        //   big +ve + small negative = big positive
        //   BUT big negative + small negative = small negative   (no use of adding to currentSum)***

        
// start a for loop from  i=0 till n
// add current element to currentsum
// compare currentSum and maxSum and update the value of maxSum accordingly 


//***if statement is put at the last because if all the elements in the array are negative then maxSum should also be negative. so if we put if condition before updating maxSum, then maxSum will be 0 which is wrong.***

// if currentSum becomes negative, reset it to 0
// return maxSum