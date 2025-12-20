#include <iostream>
#include <cstring>
using namespace std;

const int Size = 20;
const char Finished[] = "done";

int main() {
    cout << "Enter words (to stop，type the word done):" << endl;
    int counter = 0;
    char words[Size];
    while(strcmp(Finished,words) != 0) {
	counter++;
	cin >> words;
	cin.get();
    }
    cout << "You entered a total of " << counter-1 << " word." << endl;
    return 0;
}
