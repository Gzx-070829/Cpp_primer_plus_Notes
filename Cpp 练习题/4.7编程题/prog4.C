#include <iostream>
#include <string>
using namespace std;

int main() {
    string fn, ln, full_n;
    cout << "Enter your first name: ";
    cin >> fn;
    cout << "Enter your last name: ";
    cin >> ln;
    full_n = ln + ", " + fn;
    cout << "Here's the information in a single string: " << full_n <<endl;

    return 0;
}
