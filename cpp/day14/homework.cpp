#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
namespace fs = std::filesystem;

using namespace std;

bool getCommand();
string fileCreate();
void writeNote(string);
string getFileName(string);
string getWeekDay(int);
int dayofweek(int d, int m, int y);
enum week{Sunday = 0, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
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
	string s = fileCreate();
    string day = "";
    string month = "";
    string year = "";
    int week;
    string w;
    ifstream file;
    cout << "List your notes.\n";
    string text;
    for(int i = 0; s[i] != '\0'; i += 11){
        day = s[i]; day += s[i + 1];
        month = s[i + 3]; month += s[i + 4];
        year = s[i + 6]; year += s[i + 7]; year += s[i + 8]; year += s[i + 9];
        week = dayofweek(stoi(day), stoi(month), stoi(year));
        w = getWeekDay(week);
        cout << w << " " << day + "/" + month + "/" + year << endl;
        file.open("./note/" + day + '_' + month + '_' + year + ".txt");
        while(!file.eof()) {
            getline(file, text);
            cout << "Note:" << text << endl;
        }
        file.close();
        cout << w;

    }
    return 0;
}
string fileCreate() {
    bool b = true;
    string allNotesDay = "";
    while(b) {
        cout << "Input dd/yy/yyyy:";
        string data;
        cin >> data;
        allNotesDay += data;
        allNotesDay += ' ';
        string s = getFileName(data);
        writeNote(s);
        b = getCommand();
    }
    return allNotesDay;
}

void writeNote(string s){
    ofstream file;
    file.open(s.c_str(), ios::app);
    cout << "Note:";
    cin.ignore();
    getline(cin, n.note);
    file << n.note << endl;
    file.close();
}

string getFileName(string data){
    int elem = 0;
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

int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3,
                       5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y / 4 - y / 100 +
             y / 400 + t[m - 1] + d) % 7;
}

bool getCommand() {
    string command;
    cout << "Command:(add/exit)";
    cin >> command;
    if(command == "exit"){
        return false;
    }
    return true;
}
