#include <iostream>
#include <array>
using namespace std;

int main() {
    array<double, 3>a1;
    cout << "Please input three records of 40 meters.\n";
    cout << "First record: ";
    cin >> a1[0];
    cout << "Second record: ";
    cin >> a1[1];
    cout << "Third record: ";
    cin >> a1[2];
    double sum = (a1[0] + a1[1] + a1[2]);
    cout << "OK, you input:\n" << a1[0] << "\n"
         << a1[1] << "\n" << a1[2] << "\n";
    double average = sum / 3;
    cout << "Congratulate, your average performance is " << average << endl;

    return 0;
}
