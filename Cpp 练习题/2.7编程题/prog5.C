#include <iostream>
using namespace std;

double convert(double x) {
    return x*1.8+32.0;
}

int main() {
    double x;
    cout << "Please enter a Celsius value: ";
    cin >> x;
    cout << x << "degrees Celsius is " << convert(x) << " degrees Fahrenheit." << endl;

    return 0;
} 
