#include<iostream>
#include<vector>
using namespace std;
int main(){
    //vector initialization
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    for(char c : vec){
        cout << c << " ";
    }
    cout << endl;

    //vector functions

    //vector size
    cout << "size = " << vec.size() << endl;

    //vector push_back
    vec.push_back('f');
    for(char c : vec){
        cout << c << " ";
    }
    cout << endl;
    cout << "size after push_back = " << vec.size() << endl;

    //vector pop_back
    vec.pop_back();
    for(char c : vec){
        cout << c << " ";
    }
    cout << endl;
    cout << "size after pop_back = " << vec.size() << endl;

    //front value and back value of stack
    cout << "Front value of stack = " << vec.front() << endl;
    cout << "Back value of stack = " << vec.back() << endl;

    //alternate way to write vec[i]
    cout << "vec[2] = " << vec.at(2) << endl;
    
    return 0;
}