#include <iostream>
#include <string>
using namespace std;

struct pizza {
    string name;
    double d;
    double m;
};

int main() {
    pizza n;
    cout << "Enter the name of the pizza: " ;
    getline(cin, n.name);
    cout << "Enter the diameter of the pizza: ";
    cin >> n.d;
    cout << "Enter the weight of the pizza: ";
    cin >> n.m;

    return 0;
}
