#include <iostream>
#include <string>

using namespace std;

int main() {
    string fn, ln;
    char g;
    int age;
    cout << "What is your first name? ";
    getline(cin, fn);
    cout << "What is your last name? ";
    getline(cin, ln);
    cout << "What letter grade do you deserve? ";
    cin >> g;
    cout << "What is your age? ";
    cin >> age;
    g += 1;
    cout << "Name: " << ln << ", " << fn << endl;
    cout << "Grade: " << g << endl;
    cout << "Age: " << age << endl;

    return 0;
}
