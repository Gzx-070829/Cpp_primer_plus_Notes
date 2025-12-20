#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char fn[20], ln[20];
    cout << "Enter your first name: ";
    cin.getline(fn, 20);
    cout << "Enter your last name: ";
    cin.getline(ln, 20);
    cout << "Here's the information in a single string: " << ln << ", "
         << fn << endl;

    return 0;
}
