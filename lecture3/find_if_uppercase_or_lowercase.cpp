#include<iostream>
using namespace std;
int main()  {
    char ch;
    cout <<"Enter a Character = " ;
    cin >> ch;
    if(isupper(ch)) {
        cout << ch << " is an uppercase character" <<endl;
    }
    else if(islower(ch)) {
        cout << ch << " is a lowercase character" << endl;
    }
    else {
        cout << ch << " is not an alphabet"<< endl;
    }
    return 0;
}