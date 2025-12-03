#include <iostream>
using namespace std;

const int  convert = 12;

int main() {
    int x;
    cout << "Please enter your height in inches_";
    cin >> x;
    cout << "Your heigt is " << x%convert << " feet and " << x/convert << " inches." << endl;

    return 0;
} 
