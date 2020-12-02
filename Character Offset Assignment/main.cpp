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
    const int numTests = 5;
    char letter;
    char tests[][numTests] = {{'a','a','Z','?','A'}, {1,-1,-1,5,32}};
    
    for(int i = 0; i < numTests; i++) {
        try {
            letter = character(tests[0][i], tests[1][i]);
            cout << letter << endl;
        }
        catch (invalidCharacterException) {
            cout << "ERROR: Invalid Character" << endl;
        }
        catch (invalidRangeException) {
            cout << "ERROR: Invalid Range" << endl;
        }
    }
    cout << endl << endl;
    return 0;
}

char character(char start, int offset) {
    
    if(!isalpha(start)) {
        throw invalidCharacterException();
    }
    else if (!isalpha(tolower(start) + offset)) {
        throw invalidRangeException();
    }
    return start + offset;
}
