#include <iostream>
using namespace std;

const double d_to_m = 60.0;
const double m_to_s = 60.0;

int main() {
    int d, m, s;
    cout << "Enter a latitude in degrees, minutes, seconds:\n ";
    cout << "First, enter the degrees: ";
    cin >> d;
    cout << "Next, enter the minutes of arc: ";
    cin >> m;
    cout << "Finally, enter the seconds of arc: ";
    cin >> s;
    cout << d << " degrees, " << m << " minutes, " << s << " seconds = ";
    cout << d + m / d_to_m + s / (d_to_m * m_to_s) << " degrees." << endl;

    return 0;
}
