#include <iostream>
using namespace std;

const int convert_of_foot = 12;
const double convert_of_inch = 0.0254;
const double convert_of_kg = 2.2;

int main() {
    int x, y;
    double z;
    cout << "please enter your height of feet: ";
    cin >> x;
    cout << "please enter your height of inches: ";
    cin >> y;
    cout << "please enter your weight in pounds: ";
    cin >> z;
    int t_inches = x * convert_of_foot + y;
    double t_meters = t_inches * convert_of_inch;
    double c_kg = z / convert_of_kg;
    double bmi = c_kg /(t_meters * t_meters);

    cout << "Your BMI is : " << bmi << endl;
    return 0;
}
