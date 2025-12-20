#include <iostream>
#include <array>
using namespace std;

const int Size = 100;

int main() {
    array<long double, Size + 1>a;
    a[0] = a[1] = 1.0L;
    for (int i = 2; i <= Size; ++i)
	a[i] = a[i-1] * i;
    for (int i = 0; i <= Size; ++i)
	cout << i << "! = " << a[i] << endl;

    return 0;
}
