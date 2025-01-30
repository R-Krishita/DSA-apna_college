#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int *p = &a;
    int **q = &p;

    cout << "deferencing pointer p/ printing the value stored = " << *p << endl;         //5
    cout << "deferencing pointer q = "<< **q << endl;        //5
    cout << "print value of p = " << p << endl;          //address of a
    cout << "deferencing pointer q = " << *q << endl;         //address of a

    //notes
    // pointer airthmetic
    // increment(++) or decrement(--)

    int *ptr = &a;
    cout << "address of a before increment op = " << &ptr << endl;
    ptr++;    // does not add 1 but add 1 int(4 bytes) to the address
    cout << "address of a after increment op = " << ptr << endl;
    cout << "address of a before decrement op = " << ptr << endl;
    ptr--;
    cout << "address of a after decrement op = " << ptr << endl;

    //add or subtract
    ptr += 2;  //add 2 int(4 bytes) to the address
    cout << "address of a after add op = " << ptr << endl;
    ptr -=3;
    cout << "address of a after subtract op = " << ptr << endl;

    //array pointers = constant pointers
    int arr[] = {1,2,3,4,5};
    cout << "Returns the 1st index value of array = " << *arr << endl;
    cout << "Returns the 2nd index value of array = " << *(arr+1) << endl;     //+1 adds 1 int and arrays are contiguos memory locations. so +1 will give the next element.
    cout << "Returns the 3rd index value of array = " << *(arr+2) << endl;

    //2 pointers cannot be added.
    //2 pointers can be subtracted
    // eg ptr1 - ptr2 = number of blocks of the type of pointer
    // ptr1 = 108
    // ptr2 = 100
    // ptr1-ptr2 = 8 bytes = 2 int
}
