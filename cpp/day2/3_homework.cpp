#include <iostream>
using namespace std;

int main() 
{
    char character;
    cout << "Input alphabet:";
    cin >> character;
    while (! ( ( character >= 'a' && character <= 'z' ) || ( character >= 'A' && character <= 'Z' ) ) )
    {
        cout << "Input letter:";
        cin >> character;
    }
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
    return 0;
}
