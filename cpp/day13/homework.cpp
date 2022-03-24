#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string en_hy(string word);
string hy_en(string word);
int main() {
	string line;
	cout << "Input: ";
	getline(cin, line);
	line += " ";
	string word;
	int i = 0;
	ofstream text;
	text.open("translated.txt");
	bool english = false;
	if(line[0] >= 'a' && line[0] <= 'z') {
		english = true;
	}
	while(line[i] != '\0') {
		
		word = "";
		for(;line[i] != ' '; i++){
			word += line[i];
		}
		i++;
		if(english) {
			text << en_hy(word) << " ";
		} else {
			text << hy_en(word) << " ";
		}
	}
	text.close();
	return 0;
}
string en_hy(string word) {
	ifstream en_am;
	en_am.open("en-hy.txt");
	string t_word;
	bool is_same = true;
	string hy_word = "";
	while(!en_am.eof()){
		is_same = true;
		getline(en_am, t_word);
		int i;
		for(i = 0; word[i] != '\0'; i ++) {
			if(t_word[i] != word[i]) {
				is_same = false;
				continue;
			}
		}
		if(is_same) {
			for(i += 1; t_word[i] != '\0'; i++) {
				hy_word += t_word[i];
			}
			break;
		}
	}
	en_am.close();
	return hy_word;
}
string hy_en(string word) {
	ifstream am_en;
	am_en.open("hy-en.txt");
	string t_word;
	bool is_same = true;
	string en_word = "";
	while(!am_en.eof()){
		is_same = true;
		getline(am_en, t_word);
		int i;
		for(i = 0; word[i] != '\0'; i ++) {
			if(t_word[i] != word[i]) {
				is_same = false;
				continue;
			}
		}
		if(is_same) {
			for(i += 1; t_word[i] != '\0'; i++) {
				en_word += t_word[i];
			}
			break;
		}
	}
	am_en.close();
	return en_word;
}

