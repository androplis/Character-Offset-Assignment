// Andrew Biddle
// CIS 1202.501
// 12.2.2020

#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

// == Function Prototypes
char character(char, int);

int main() {

    cout << endl << endl;
    return 0;
}

char character(char start, int offset) {
    
    if(!isalpha(start)) {
        throw "invalidCharacterException";
    }
    else if (!isalpha(start + offset)) {
        throw "invalidRangeException";
    }
    return start + offset;
}
