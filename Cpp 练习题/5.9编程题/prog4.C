#include <iostream>
using namespace std;
const int base = 100;

int main() {
    double dd = base;
    double cd = base;
    int year = 0;
    while (dd >= cd) {
	cout << "In " << ++year << " year: Daphne = " << dd << endl;
	cout <<"\tCleo = " << cd << endl;
        dd += 0.1 * base;
        cd += 0.05 * cd;
     }
     cout << "In " << year << " year: Daphne = " << dd << endl;
     cout << "\tCleo = " << cd << endl;

     return 0;
}
