#include <iostream>
using namespace std;

const int d_t_h = 24;
const int h_t_m = 60;
const int m_t_s = 60;

int main() {
    long long t_s;
    cout << "Enter the number of seconds: ";
    cin >> t_s;
    long long s = t_s % m_t_s;
    long long t_m = t_s / m_t_s;
    long long m = t_m % h_t_m;
    long long t_h = t_m / h_t_m;
    long long h = t_h % d_t_h;
    long long d = t_h / d_t_h;

    cout << t_s << " seconds = "
         << d << " days, " << h << " hours, "
	 << m << " minutes, " << s << " seconds." << endl;
    return 0;
}
