#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n, i, smallest =  INT_MAX, largest = INT_MIN, smallIndex, largeIndex;
    cout << "Enter number of elements in the array = ";
    cin >> n;
    int arr[n];
    //for loop to take input from user
    for(i=0;i<n;i++){
        cout << "Enter element " << i+1 << "= ";
        cin >> arr[i];
    }
    
    //for loop to find smallest and largest element
    for(i=0;i<n;i++){
        if(arr[i] < smallest){
            smallest = i;
        }
        else if(arr[i] > largest){
            largest = i;
        }
    }
    cout << "Smallest element = " << arr[smallest] << endl;
    cout << "Largest element = " << arr[largest] << endl;
    //array before swap
    for(i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    swap(arr[smallest],arr[largest]);          //swapping works only when the variables hold the index value of targeted elements.

    //array after swap
    for(i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}