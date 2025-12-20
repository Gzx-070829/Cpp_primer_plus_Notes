#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
    string brand;
    double m;
    int c;
};

int main() {
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout << "The brand of the snack: " << snack.brand << endl;
    cout << "The weight of the snack: " << snack.m << endl;
    cout << "The calorie of the snack: " << snack.c << endl;

    return 0;
}
