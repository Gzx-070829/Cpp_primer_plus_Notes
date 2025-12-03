#include <iostream>
using namespace std;

void printTime(int x ,int y) {
    cout << x << ":" << y << endl;
}

int main() {
    int x;
    int y;
    cout << "Enter the number of hours: ";
    cin >> x;
    cout << "Enter the number of minutes: ";
    cin >> y;
    cout << "Time: ";
    printTime(x,y);

    return 0;
}
