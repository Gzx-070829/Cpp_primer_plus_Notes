#include <iostream>
#include <string>
using namespace std;

int main() {
    const  char * months[12] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    int sale[12]={};
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
	cout << "Enter the sale amout of " << months[i] << " : ";
	cin >> sale[i];
    }
    cout << "Input DONE!" << endl;

    for (int i = 0; i < 12; ++i) {
	cout << months[i] << "SLAE : " << sale[i] << endl;
	sum += sale[i];
    }

    cout << " Total sale " << sum << " this year.";

    return 0;
}
