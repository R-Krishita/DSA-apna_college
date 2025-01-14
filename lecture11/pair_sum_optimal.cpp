#include<iostream>
#include<vector>
using namespace std;

// this pairsum function is an optimised code where it is given that the array is sorted
vector<int> pair_sum(vector<int> &arr, int targetSum){
    vector<int> ans;
    int i = 0,j = arr.size() - 1;
    while(i<j){
        int pairSum = arr[i] + arr[j];
        if(pairSum > targetSum){
            j--;
        } else if(pairSum < targetSum){
            i++;
        } else if(pairSum == targetSum){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter number of elements in the array = ";
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i<n; i++){
        cout << "Enter element " << i+1 << "= ";
        cin >> arr[i];
    }
    int targetSum;
    cout << "Enter target sum = ";
    cin >> targetSum;
    vector<int> ans = pair_sum(arr, targetSum);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}