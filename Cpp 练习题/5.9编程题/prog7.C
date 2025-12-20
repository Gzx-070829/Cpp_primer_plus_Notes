#include <iostream>
#include <string>
using namespace std;

struct Car {
    string brand;
    int year;
};

int main() {
    int n = 0;
    cout << "How many cars do you wish to catalog? ";
    cin >> n;
    cin.ignore();
    Car *car;
    car = new Car[n];
    for (int i = 0; i < n; ++i) {
	cout << "Car #" << i+1 << ":" << endl;
	cout << "Please enter the make: ";
	getline(cin, car[i].brand);
	cout << "Please enter the year made: ";
        cin >> car[i].year;
    }
    cout << "Here is your collection: " << endl;
    for (int j = 0; j < n; ++j) {
	cout << car[j].year << " " << car[j].brand << endl;
    }
    delete[] car;

    return 0;
}
