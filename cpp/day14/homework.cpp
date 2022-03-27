#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string deleteSameData(string s);
bool getCommand();
string fileCreation();
void writeNote(string);
string getFileName(string);
string getWeekDay(int);
int dayOfWeek(int d, int m, int y);
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
	string s = fileCreation();
    string day = "";
    string month = "";
    string year = "";
    int week;
    string w;
    ifstream file;
    cout << "\nList your notes.\n\n";
    string text;
    s = deleteSameData(s);
    for(int i = 0; i < s.length(); i += 11){
        day = s[i]; day += s[i + 1];
        month = s[i + 3]; month += s[i + 4];
        year = s[i + 6]; year += s[i + 7]; year += s[i + 8]; year += s[i + 9];
        week = dayOfWeek(stoi(day), stoi(month), stoi(year));
        w = getWeekDay(week);
        cout << w << " " << day + "/" + month + "/" + year + '\n'<< endl;
        file.open("./note/" + day + '_' + month + '_' + year + ".txt");
        while(!file.eof()){
            getline(file, text);
            if(text == "") {
                continue;
            }
            cout << "Note: " << text << endl;
        } 
        file.close();
        cout << endl;
    }
    return 0;
}

string fileCreation() {
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
    while(data[2] != '/' || data[5] != '/' || data.size() > 10){
        cout << "Input dd/yy/yyyy:";
        cin >> data;
    }
	n.d.dd = "", n.d.mm = "", n.d.yyyy = "";
    n.d.dd += data[0]; n.d.dd += data[1]; 
    n.d.mm += data[3]; n.d.mm += data[4];
    n.d.yyyy += data[6]; n.d.yyyy += data[7]; n.d.yyyy += data[8]; n.d.yyyy += data[9];;
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

int dayOfWeek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3,
                       5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y / 4 - y / 100 +
             y / 400 + t[m - 1] + d) % 7;
}

bool getCommand() {
    int elem = 0;
    string command;
    do {
        
        cout << "Command:(add/exit)";
        cin >> command;
        if(command == "exit"){
            return false;
        }
        if(command == "add"){
            return true;
        }
    } while(elem == 0);
    return true;
}

string deleteSameData(string s){
    int b = 0;
    int j;
    for(int i = 0; i < s.length() - 11; i += 11) {
        for(j = i + 11; j < s.length(); j += 11) {
            b = 0;
            for(int k = 0; k < 10; k ++){
                if(s[i + k] == s[j + k]){
                    b ++;
                }
            }
            if(b == 10){
                s.erase(i, 11);
                i = -11;
                break;
            }
        }   
    }
    return s;
}
