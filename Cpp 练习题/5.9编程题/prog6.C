#include <iostream>
#include <string>
using namespace std;

int main() {
    const  char * months[12] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    int sale[3][12]={};
    int sum = 0;
    for (int i = 0; i < 3; ++i) {
	for ( int j = 0; j < 12; ++j) {
	    cout << "Enter the sale amout of " << months[i] << " : ";
	    cin >> sale[i][j];
	}
	cout << "End of " << i+1 << " year's data." << endl;
    }

    for (int i = 0; i < 3; ++i) {
	for (int j = 0; j < 12; ++j) {
	    cout << months[j] << " SALE: " << sale[i][j] << endl;
	    sum += sale[i][j];
	}
	cout << "Total sale " << sum << " " << i+1 << " year." << endl;
    }

    return 0;
}
