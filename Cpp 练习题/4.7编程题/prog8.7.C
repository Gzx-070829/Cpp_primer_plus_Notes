#include <iostream>
#include <string>
using namespace std;

struct pizza {
    string name;
    double d;
    double m;
};

int main() {
    pizza * p = new pizza;
    cout << "Enter the pizza's information: " << endl;
    cout << "Pizza's diameter(inches): ";
    cin >> p->d;
    cin.ignore();
    cout << "Pizza's name: ";
    getline(cin, p->name);

    cout << "pizza's weight: ";
    cin >> p->m;

    cout << "The pizza is " << p->name << endl;
    cout << "And the diameter of it is " << p->d << " inches, weight is "
         << p->m << endl;
    delete p;
    return 0;
}
