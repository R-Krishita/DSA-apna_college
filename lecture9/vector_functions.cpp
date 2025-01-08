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

    //vector pushback
    vec.push_back('f');
    for(char c : vec){
        cout << c << " ";
    }
    cout << endl;
    cout << "size after push_back = " << vec.size() << endl;

    return 0;
}