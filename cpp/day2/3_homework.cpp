#include <iostream>
using namespace std;
int main() {
    char character;
    cout << "Input alphabet:";
    cin >> character;
    switch (character) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            cout << "'" << character << "'" << "is vowels" << endl;
            break;
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'z':
            cout << "'" << character << "' is consonants" << endl;
            break;
        default :
            cout << "Error!" << endl;
            break;
    }
    return 0;
}
