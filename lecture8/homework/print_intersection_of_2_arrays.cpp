#include <iostream>
using namespace std;

int main() {
    int n, m, i, j;
    cout << "Enter number of elements in the first array: ";
    cin >> n;
    int arr1[n];
    for (i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << " of first array: ";
        cin >> arr1[i];
    }

    cout << "Enter number of elements in the second array: ";
    cin >> m;
    int arr2[m];
    for (i = 0; i < m; i++) {
        cout << "Enter element " << i + 1 << " of second array: ";
        cin >> arr2[i];
    }

    cout << "Intersection of the two arrays: ";
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break; 
            }
        }
    }
    cout << endl;

    return 0;
}