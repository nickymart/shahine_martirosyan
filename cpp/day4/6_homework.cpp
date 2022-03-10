#include <iostream>
#include <string>
using namespace std;

char to_lower(char);
bool is_polindrom(string);
int main() {
    string word;
    cout << "Input:";
    cin >> word;
    if(is_polindrom(word))
        cout << "True" << endl;
    else
        cout << "False" << endl;
	return 0;
}
bool is_polindrom(string word) {
    for(int i = 0; i < word.size() / 2; i++) {
        if(to_lower(word[i]) != to_lower(word[word.size() - i -1]))
            return 0;
    }   
    return 1;
}
char to_lower(char c) {
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    return c;
}
