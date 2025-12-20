#include <iostream>
#include <string>
using namespace std;

string word;

int main() {
    int counter = 0;
    cout << "Enter words(to stop, type the word done): " << endl;
    while(true) {
	cin >> word;
	if (word == "done") {
	    break;
	}
	counter++;
    }
    cout << "You entered a total of " << counter << " word." << endl;

    return 0;
}
