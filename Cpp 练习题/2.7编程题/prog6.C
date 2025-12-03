#include <iostream>
using namespace std;

double convert(double x) {
    return x*63240;
}

int main() {
    double x;
    cout << "Enter a number of light years: ";
    cin >> x;
    cout << x <<" light years = " << convert(x) <<" astronomical units." << endl;

    return 0;
}
