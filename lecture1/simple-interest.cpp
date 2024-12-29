#include<iostream>
using namespace std;
int main(){
    int p, r, t, simple_interest;
    cout << "Enter Principal rate = ";
    cin >>p;
    cout << "Enter Rate of interest = ";
    cin >>r;
    cout << "Enter Time in years= ";
    cin >>t;
    simple_interest = (p*r*t)/100;
    cout << "Simple Interest = "<<simple_interest << endl;
    return 0;
}
