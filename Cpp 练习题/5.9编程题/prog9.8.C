#include <iostream>
#include <string>
using namespace std;

string word;
const Finished[] = "done";

int main() {
    int counter = 0;
    cout << "Enter word (to stop, type the word done): " << endl;
    while(true) {
	cin >> word;
	if(word == "done")
	    break;
	counter++;
    }

    cout << "You entered a total of " << counter << " word." << endl;

    return 0;
} 
