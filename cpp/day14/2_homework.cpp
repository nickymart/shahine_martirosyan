#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

enum PhoneCodes {
    Russia = 7,    Armenia = 374,    Germany = 49,    France = 33,    Georgia  = 995
};
void readData();
struct country {
    string Country = "";
    string Capital = "";
    string Domain = "";
    long long Population = 0;
    long long Area = 0;
    long long GDP = 0;
    PhoneCodes Code = Russia;

} Data[5];
void getInformation(string);
PhoneCodes getPhoneCode(string country);
void searchFromCountryName(string countryName);
void searchFromCapital(string capital);
void searchFromDomain(string domain);
void searching();
void readData();
void compare();
char diff(long, long);
int main(int argc, char** argv){
    readData();
    if (strcmp(argv[1], "search") == 0) {
        searching();
    }else if(strcmp(argv[1], "compare") == 0){
        compare();
    } else{
        cout << "Error!" << endl;
    }
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

void  searching(){
    string search;
    do {
        cout << "Input search mode (countryName / capital / domain):";
        cin >> search;
    } while(search != "countryName" && search != "capital" && search != "domain");
    string str = "";
    if(search == "countryName"){
        cout << "Input Country :" ;
        cin >> str;
        searchFromCountryName(str);
    }
    else if( search == "capital"){
        cout << "Input Capital :" ;
        cin >> str;
        searchFromCapital(str);
    }
    else {
        cout << "Input Domain :" ;
        cin >> str;
        searchFromDomain(str);
    }
}

void searchFromCountryName(string countryName){
    for(int i = 0; i < 5; i++){
        if(Data[i].Country == countryName){
            getInformation(i);
            break;
        }
    }
}
void searchFromCapital(string capital){
    for(int i = 0; i < 5; i++){
        if(Data[i].Capital == capital){
            getInformation(i);
            break;
        }
    }
}
void searchFromDomain(string domain){
    for(int i = 0; i < 5; i++){
        if(Data[i].Domain == domain){
            getInformation(i);
            break;
        }
    }
}
void readData(){
    ifstream file;
    file.open("C:\\Users\\User\\Desktop\\cpp\\day15\\countries.txt");
    int elem = 0;
    string line;
    string population = "", area = "",gdb = "";
    int j = 0;
    while(!file.eof()) {
        int i = 0;
        getline(file, line);
        for(; line[i] != '\0'; i++){
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
        j++;
        population = "", area = "",gdb = "";
        elem = 0;
    }
    file.close();
}

void compare(){
    string c1, c2;
    cout << "Input first country:";
    cin >> c1;
    cout << "Input second country:";
    cin >> c2;
    int index1 = -1, index2= -1;
    for(int i = 0;index1 == -1 || index2 == -1; i++){
        if (i > 4){
            return;
        }
        if(Data[i].Country == c1){
            index1 = i;
        }
        if(Data[i].Country == c2){
            index2 = i;
        }
    }
    cout << "=============================================\n";
    cout << "            | " << Data[index1].Country << " | " << Data[index2].Country << endl;
    cout << "=============================================\n";
    cout << " Capital    | " << Data[index1].Capital << " | " << Data[index2].Capital << endl;
    cout << " Domain     | " << Data[index1].Domain  << " | " << Data[index2].Domain << endl;
    cout << " Population | " << Data[index1].Population << " " << diff(Data[index1].Population, Data[index2].Population) << " " << Data[index2].Population << endl;
    cout << " Area       | " << Data[index1].Area << " " << diff(Data[index1].Area, Data[index2].Area) << " " << Data[index2].Area << endl;
    cout << " GDB        | " << Data[index1].GDP << diff(Data[index1].GDP, Data[index2].GDP) << " " << Data[index2].GDP << endl;
    cout << " Phone Code | +" << Data[index1].Code << " | +" << Data[index2].Code << endl;
}
char diff(long num1, long num2){
    if(num1 > num2){
        return '>';
    } else if(num1 < num2){
        return '<';
    }
    return '=';
}
