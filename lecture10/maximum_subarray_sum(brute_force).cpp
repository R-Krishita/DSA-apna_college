#include<iostream>
#include<vector>
using namespace std;
int subarray_sum(vector<int> &vec , int n){
    int i,j, max_sum = 0, current_sum = 0;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            current_sum += vec[j];
            max_sum = max(current_sum, max_sum);
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