#include <iostream>
using namespace std;

int main() {
    int a, sum = 0;
    cout << "Please input a number(0 wiil quit): " << endl;
    while (true) {
	cin >> a;
	if (a == 0) {
	    break;
	}
	sum += a;
        cout << "Up to now: " << sum << endl;
    }
    cout << "Input is over." << endl;

    return 0;
}
