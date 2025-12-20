#include <iostream>
using namespace std;

struct CandyBar {
    string brand;
    double m;
    int c;
};

int main() {
    CandyBar snack[3] = { {"Mocha Munch", 2.3, 350}, {"Hershey bar", 4.2, 550},
        {"Musketeers", 2.6, 430} };
    cout << "My 1st brand is " << snack[0].brand << endl;
    cout << "And its weight is " << snack[0].m << ", calorie is "
         << snack[0].c << endl;
    cout << "My 2nd brand is " << snack[1].brand << endl;
    cout << "And its weight is " << snack[1].m << ", calorie is "
         << snack[1].c << endl;
    cout << "My 3th brand is " << snack[2].brand << endl;
    cout << "And its weight is " << snack[2].m << ", calorie is "
         << snack[2].c << endl;

    return 0;
}
