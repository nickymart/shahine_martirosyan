#include <iostream>
#include <fstream>

using namespace std;
string correct_word(string word);
int main() {
	string line;
	cout << "Input: ";
	getline(cin, line);
	line += " ";
	string word;
	int i = 0;
	cout << "Output: ";
	while(line[i] != '\0') {
		word = "";
		for(;line[i] != ' '; i++){
			word += line[i];
		}
		i++;
		cout << correct_word(word) << " ";
	}
	cout << endl;
	return 0;
}
string correct_word(string word) {
	ifstream f1;
	f1.open("dictionary.txt");
	string c_word;	
	int count = 0;
	while(!f1.eof()) {
		count = 0;
		getline(f1, c_word);
		if(c_word.size() != word.size()){
			continue;
		}
		for(int i = 0; word[i] != '\0'; i++) {
			if(word[i] != c_word[i]){
				count ++;
			}
		}
		if(count == 1) {
			break;
		}
	}
	f1.close();
	if(count != 1) {
		return word;
	}
	return c_word;
}
