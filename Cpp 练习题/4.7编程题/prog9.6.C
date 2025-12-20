#include <iostream>
#include <cstring>
using namespace std;

struct CandyBar {
    char name[20];
    double m;
    int c;
};

int main() {
    CandyBar *p = new CandyBar[3];
    strcpy(p[0].name, "Mocha Munch");
    p[0].m = 2.3;
    p[0].c = 350;
    strcpy(p[1].name, "Hershey bar");
    p[1].m = 4.2;
    p[1].c = 550;
    strcpy(p[2].name, "Musketeers");
    (p + 2)->m = 2.6;
    (p + 2)->c = 430;

    cout << "My 1st CandyBar is " << p->name <<endl;
    cout << "And weight is " << p->m << ", calorie is " << p->c << endl;

    cout << "My 2nd CandyBar is " << (p + 1)->name <<endl;
    cout << "And weight is " << (p + 1)->m << ", calorie is " << (p + 1)->c << endl;

    cout << "My 3th CandyBar is " << p[2].name <<endl;
    cout << "And weight is " << p[2].m << ", calorie is " << p[2].c << endl;

    return 0;
}

