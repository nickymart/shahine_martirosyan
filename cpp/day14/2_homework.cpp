#include <iostream>
#include <fstream>
#include <string>

using namespace std;

enum PhoneCodes {
        Russia = 7,    Armenia = 374,    Germany = 49,    France = 33,    Georgia  = 995
};
void readData();
struct country {
        string Country = ""; 
        string Capital = ""; 
        string Domain = ""; 
        long Population = 0;
        long Area = 0;
        long GDP = 0;
        PhoneCodes Code = Russia;
    
} Data[5];
void getInformation(string);
PhoneCodes getPhoneCode(string country);
void searchFromCountryName(string countryName);
void searching(string s); 
void searchFromCountryName(string countryName);
void readData();

int main(int argc, char** argv){
        readData();
        /*string search;
        do {
            cout << "Input search mode (countryName / capital / domain):";
            cin >> search;
        } while(search != "countryName" && search != "capital" && search != "domain");
        searching(search);  */  
        return 0;
}
PhoneCodes getPhoneCode(string country){
    if(country == "Russia")
            return Russia;
    if(country == "Armenia")
            return Armenia;
    if(country == "Germany") 
            return Germany;
    if(country == "France")
            return France;
    return Georgia;
}
void getInformation(int index) {
    
    cout << "Output: Country     - " << Data[index].Country << endl;
    cout << "        Capital     - " << Data[index].Capital << endl;
    cout << "        Domain      - " << Data[index].Domain << endl;
    cout << "        Population  - " << Data[index].Population << endl;
    cout << "        Area        - " << Data[index].Area << endl;
    cout << "        GDB         - " << Data[index].GDP << endl;
    cout << "        PhoneCode  - +" << Data[index].Code << endl;

}

void  searching(string s){ 
    string str = ""; 
    if(s == "countryName"){
        cout << "Input Country :" ;
        cin >> str;
        searchFromCountryName(str);
    }   
    /*else if( s == "capital"){
        cout << "Input Capital :" ;
        cin >> str;
        searchFromCapital(str);
    }
    else {
        cout << "Input Domain :" ;
        cin >> str;
        searchFromDomain(str);
    }*/
}

void searchFromCountryName(string countryName){
        for(int i = 0; i < 5; i++){
                if(Data[i].Country == countryName){
                        getInformation(i);
                        break;
                }
        }
}
void readData(){
        ifstream file;
        file.open("countries.txt");
        int elem = 0;
        string line;
        string population = "", area = "",gdb = ""; 
        while(!file.eof()) {
            int j = 0;
            getline(file, line);    
            for(int i = 0; line[i] != '\0'; i++){
                if(line[i] == ','){
                    elem ++; 
                    i++;
                }else {
                    if(elem == 0){ 
                        Data[j].Country += line[i];
                    } else if(elem == 1){ 
                        Data[j].Capital += line[i];
                    } else if(elem == 2){ 
                        Data[j].Domain += line[i];
                    } else if(elem == 3){ 
                        population += line[i];
                    } else if(elem == 4){ 
                        area += line[i];
                    } else {
                        gdb += line[i];
                    }
                }    
            }
            Data[j].Population = stol(population);
            Data[j].Area = stol(area);
            Data[j].GDP = stol(gdb);
            Data[j].Code = getPhoneCode(Data[j].Country);
            cout << Data[j].Capital << endl;
            j++;
            population = "", area = "",gdb = "";
            elem = 0;
        }
        file.close();
}  
