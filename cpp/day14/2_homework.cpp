#include <iostream>
#include <fstream>
#include <string>

using namespace std;

enum PhoneCodes {    Russia = 7,    Armenia = 374,    Germany = 49,    France = 33,    Georgia	= 995};

struct country {
    string Country;
    string Capital;
    string Domain;
    long Population;
    long Area;
    long GDP;
    int Code;
} c;
void getInformation(string);
int getPhoneCode(string);
string searching(string);
string searchFromCountryName(string);
string searchFromCapital(string);
string searchFromDomain(string);

int main(int argc, char** argv){
    
    if(argv[1] == "search"){
        string search;
        do {
            cout << "Input search mode (countryName / capital / domain):";
            cin >> search;
        } while(search != "countryName" || search != "capital" || search != "domain");
        getInformation(searching(search));
    }
    return 0;
}

string searching(string s){
    string str;
    string line;
    if(s == "countryName"){
        cout << "Input Country :" ;
        cin >> str;
        line = searchFromCountryName(str);
    }
    else if( s == "capital"){
        cout << "Input Capital :" ;
        cin >> str;
        line = searchFromCapital(str);
    }
    else {
        cout << "Input Domain :" ;
        cin >> str;
        line = searchFromDomain(str);
    }
    return line;
}

string searchFromCountryName(string countryName){
    ifstream file;
    file.open("countries.txt");
    bool b = true;
    string text = "";
    /*while(!file.eof()){
        b = true;
        getline(file, text);
        cout << text << endl;;
        for(int i = 0; text[i] != ','; i++){
            if(countryName[i] != text[i]){
                b = false;
            }
        }
        if(b){
            file.close();
            break;
        }
    }*/
    getline(file, text);
    file.close();
    return text;
}

string searchFromCapital(string capital);

string searchFromDomain(string domain);

void getInformation(string line) {
    int elem = 0;
    string population, area,gdb;
    for(int i = 0; line[i] != '\0'; i ++){
        if(line[i] == ','){
            elem ++;
        } else {
            if(elem = 0){
                c.Country += line[i];
            }
            else if(elem = 1){
                c.Capital += line[i];
            }
            else if(elem = 2){
                c.Domain += line[i];
            }
            else if(elem = 3){
                population += line[i];
            }
            else if(elem = 4){
                area += line[i];
            }
            else {
                gdb += line[i];
            }
        }
    }
    c.Population = stoi(population.c_str());
    c.GDP = stoi(gdb.c_str());
    c.Area = stoi(area.c_str());
    c.Code = getPhoneCode(c.Country);
    cout << "Output: Country    - " << c.Country << endl;
    cout << "        Capital    - " << c.Capital << endl;
    cout << "        Domain     - " << c.Domain << endl;
    cout << "        Population - " << c.Population << endl;
    cout << "        Area       - " << c.Area << endl;
    cout << "        GDB        - " << c.GDP << endl;
    cout << "        Phone Code - +" << c.Code << endl;
}

int getPhoneCode(string country){
    if(country == "Russia")
            return Russia;
    else if(country == "Armenia")
            return Armenia;
    else if(country == "Germany") 
            return Germany;
    else if(country == "France")
            return France;
    return Georgia;
}
