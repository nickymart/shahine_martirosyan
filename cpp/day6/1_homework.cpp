#include <iostream>
#include <string>
using namespace std;

bool is_two_b(string);
int main()
{
    string line;
    cout << "Enter the line:";
    getline(cin, line);
    int count = 0;
    string word = "";
    line += " ";
    for (int i = 0; i < line.size(); i++) {
        if (line[i] == ' ') {
            count += is_two_b(word);
            word = "";
            continue;
        }
        word += line[i];
    }
    cout << count << endl;
    return 0;
}
bool is_two_b(string word){
    int i = 2;
    for (int j = 0; j < word.size(); j ++) {
        if (word[j] == 'B') {
            i--;    
        }    
    }
    if (i > 0) {
        return 0;    
    } else {
        return 1;
    }
}
