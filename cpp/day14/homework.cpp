#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <locale>
#include <ctime>
#include <iomanip>

using namespace std;
string getFileName(string data){
	n.d.dd = "", n.d.mm = "", n.d.yyyy = ""; 
       	for(int i = 0; data[i] != '\0'; i++) {
	       	if(data[i] != '/' && elem == 0) {
		       	n.d.dd += data[i];
                        continue;
		}else if(data[i] == '/'){
			elem ++; 
			i ++; 
		}
		if(data[i] != '/' && elem == 1) {
			n.d.mm += data[i];
			continue;
		}
		if(elem == 2){ 
			n.d.yyyy += data[i];
		}
	}	
	return "./note/" +  n.d.dd + '_' + n.d.mm + '_' + n.d.yyyy + ".txt";
}
string getDayMonthYear(string data){
	n.d.dd = "", n.d.mm = "", n.d.yyyy = ""; 
       	for(int i = 0; data[i] != '\0'; i++) {
	       	if(data[i] != '/' && elem == 0) {
		       	n.d.dd += data[i];
                        continue;
		}else if(data[i] == '/'){
			elem ++; 
			i ++; 
		}
		if(data[i] != '/' && elem == 1) {
			n.d.mm += data[i];
			continue;
		}
		if(elem == 2){ 
			n.d.yyyy += data[i];
		}
	}	
	return n.d.dd + '/' + n.d.mm + '/' + n.d.yyyy;
}
enum week{

                Sunday,
                Monday,
                Tuesday,
                Wednesday,
                Thursday,
                Friday,
                Saturday,
};
string getWeekDay(int day){
	switch(day) {
		case Sunday:
			return "Sun";
		case Monday:
			return "Mon";
		case Tuesday:
			return "Tue";
		case Wednesday:
			return "Wed";
		case Thursday:
			return "Thu";
		case Friday:
			return "Fri";
		default:
			return "Sat";
	}
}
int getWeekDay(int yy, int mm, int dd)
{
	int rst =
		dd
		+ ((153 * (mm + 12 * ((14 - mm) / 12) - 3) + 2) / 5)
		+ (365 * (yy + 4800 - ((14 - mm) / 12)))
		+ ((yy + 4800 - ((14 - mm) / 12)) / 4)
		- ((yy + 4800 - ((14 - mm) / 12)) / 100)
		+ ((yy + 4800 - ((14 - mm) / 12)) / 400)
		- 32045;

	return (rst + 1) % 7 ;
}
struct diary {
        string note;
        struct data {
                string dd; 
                string mm; 
                string yyyy;
        }d;
	week day;
} n;

int main() {
	ofstream filename;
        bool b = true;
        while(b) {
                cout << "Input dd/yy/yyyy:";
                string data;
                cin >> data;
                int elem = 0;
                string s = getFileName(data);
		ofstream file;
		filename.open("filename.txt", ios::app);
		string text;
                getline(s, filename);
		filename << endl;
		file.open(s.c_str(), ios::app);
                cout << "Note:";
                cin.ignore();
                getline(cin, text);
                file << text << endl;
                file.close();
                string command;
                cout << "Command:(add/exit)";
                cin >> command;
                if(command == "exit"){
                        b = false;
                }
        }
	filename.close();
	cout << "List of your notes."
	ifstream file;
	file.open("filename.txt");
	string s;
	string text;
	while(!file.eof()) {
		getline(file, s);
		ifstream f1;
		f1.open(s);
		
		while(!f1.eof()) {
			getline(f1, text);
			
		}
	}
        return 0;
}

