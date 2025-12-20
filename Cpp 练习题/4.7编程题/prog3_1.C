#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int Size = 20;
    char fn[Size], ln[Size];
    char fulln[Size*2];

    cout << "Enter your first name: ";
    cin.getline(fn, Size);
    cout << "Enter your last name: ";
    cin.getline(ln, Size);
    strcpy(fulln, ln);
    strcat(fulln, ", ");
    strcat(fulln, fn);
    cout << "Here's the information in a single strig: " << fulln << endl;

    return 0;
}
