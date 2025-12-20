#include <iostream>
using namespace std;

int main() {
    double a, sum = 0;
    do {
	cout << "Input a number to add: ";
        cin >> a;
        sum += a;
    }while(a != 0);
    cout << "Input end.\n" << "The sum = " << sum << endl;

    return 0;
}
