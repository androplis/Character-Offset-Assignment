// Andrew Biddle
// CIS 1202.501
// 12.2.2020

#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

// == Function Prototypes
char character(char, int);

// == Exception Classes
class invalidCharacterException {};
class invalidRangeException {};

int main() {
    char letter;
    try {
        letter = character('A', 32);
        cout << letter << endl;
    }
    catch (invalidCharacterException) {
        cout << "ERROR: Invalid Character" << endl;
    }
    catch (invalidRangeException) {
        cout << "ERROR: Invalid Range" << endl;
    }
    
    cout << endl << endl;
    return 0;
}

char character(char start, int offset) {
    
    if(!isalpha(start)) {
        throw invalidCharacterException();
    }
    else if (!isalpha(start + offset)) {
        throw invalidRangeException();
    }
    return start + offset;
}
