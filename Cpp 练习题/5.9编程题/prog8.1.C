#include <iostream>
#include <cstring>
using namespace std;

const int Size = 20;
const char Finished[] = "done";

int main() {
    cout << "Enter words (to stop, type the word done):" << endl;

    int counter = 0;
    char words[Size];

    while (true) {
        cin >> words;
        if (strcmp(words, Finished) == 0)
            break;
        counter++;
    }

    cout << "You entered a total of "
         << counter << " word." << endl;

    return 0;
}
