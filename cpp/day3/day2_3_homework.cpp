#include <iostream>
using namespace std;
void vowels_or_consonants(char character);
int main() 
{
    char character;
    do {
        cout << "Input letter:";
        cin >> character;
    } while (! ( ( character >= 'a' && character <= 'z' ) || ( character >= 'A' && character <= 'Z' ) ) );
    vowels_or_consonants(character);
    return 0;
}
void vowels_or_consonants(char character) {
    switch (character) 
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'Y':
            cout << "'" << character << "'" << "is vowels" << endl;
            break;
        default :
            cout << "'" << character << "' is consonants" << endl;
            break;
    }
}
