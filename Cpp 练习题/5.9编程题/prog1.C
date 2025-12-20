#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Please input the smaller number first." << endl;
    cout << "First number: ";
    cin >> a;
    cout << "Second number: ";
    cin >> b;
    int sum = 0;
    for (int i= a; i <= b; ++i)
	sum += i;
    cout << "The sum of " << a << " +...+ " << b << " is ";
    cout << sum << endl;

    return 0;
}
