#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const int s = 8;
int arr[s];
struct car {
    string Brand = "";
    string MotorVolume = "";
    string MinPrice = "";
    string MaxPrice = "";
    string Mileage = "";
    string Color = "";
    string GearBox = "";

} c[8];

void New();
void getInformation(int index);
void readData();
void filterPrice(int  , int );
void filterBrand(string );
void filterColor(string );
void filterGearBox(string );
void filterMileage(int, int);
void filterMotorVolume(int, int);
void isExist(int i);
void filter();

int main() {
    readData();
    New();
    string str;
    cout << "Do you want to filter the list?(yes/no)";
    cin >> str;
    if(str == "no"){
        for(int i = 0; i < s; i++){
            getInformation(i);
        }
        return 0;
    }
    else if(str == "yes"){
        filter();
    }
    return 0;
}

void filter(){
    cout << "How do you want to filter?(price/brand/color/gearbox/mileage/motorvolume)";
    string f;
    cin >> f;
    string word;
    f += "/";
    for(int i = 0; f[i] != '\0'; i++){
        if(f[i] != '/'){
            word += f[i];
            continue;
        }
        if(word == "price"){
            int min = 0, max = 18000000;
            string str;
            cout << "Do you want to import the minimum price?(yes/no)";
            cin >> str;
            if(str == "yes"){
                cout << "MinPrice: ";
                cin >> min;
            }
            cout << "Do you want to import the maximum price?(yes/no)";
            cin >> str;
            if(str == "yes"){
                cout << "MaxPrice: ";
                cin >> max;
            }
            filterPrice(min, max);
        }
        else if(word == "brand"){
            string brand;
            cout << "Brand: ";
            cin.ignore();
            getline(cin, brand);
            filterBrand(brand);
        }
        else if(word == "color"){
            string color;
            cout << "Color: ";
            cin >> color;
            filterColor(color);
        }
        else if(word == "gearbox"){
            string gearbox;
            cout << "GearBox: ";
            cin >> gearbox;
            filterGearBox(gearbox);
        }
        else if(word == "mileage"){
            int min = 0, max = 100000;
            string str;
            cout << "Do you want to import the minimum mileage?(yes/no)";
            cin >> str;
            if(str == "yes"){
                cout << "MinMileage: ";
                cin >> min;
            }
            cout << "Do you want to import the maximum mileage?(yes/no)";
            cin >> str;
            if(str == "yes"){
                cout << "MaxMileage: ";
                cin >> max;
            }
            filterMileage(min, max);
        }
        else if(word == "motorvolume"){
            int min = 0, max = 10000;
            string str;
            cout << "Do you want to import the minimum motorvolume?(yes/no)";
            cin >> str;
            if(str == "yes"){
                cout << "MinMotorVolume: ";
                cin >> min;
            }
            cout << "Do you want to import the maximum motorvolume?(yes/no)";
            cin >> str;
            if(str == "yes"){
                cout << "MaxMotorVolume: ";
                cin >> max;
            }
            filterMotorVolume(min, max);
        }
        word = "";
    }
    for(int i = 0; i < s; i ++){
        if(arr[i] != -1){
            getInformation(arr[i]);
        }
    }
}

void readData(){
    ifstream file;
    file.open("C:\\Users\\User\\Desktop\\shahine_martirosyan\\cpp\\day15\\cars.txt");
    int elem = 0;
    string line;
    int j = 0;
    while(!file.eof()) {
        int i = 0;
        getline(file, line);
        if(line[0] == '\0'){
            break;
        }
        for(; line[i] != '\0'; i++){
            if(line[i] == ','){
                elem ++;
                i++;
            }else {
                if(elem == 0){
                    c[j].Brand += line[i];
                } else if(elem == 1){
                    c[j].MinPrice += line[i];
                } else if(elem == 2){
                    c[j].MaxPrice += line[i];
                } else if(elem == 3){
                    c[j].Mileage += line[i];
                } else if(elem == 4){
                    c[j].MotorVolume += line[i];
                } else if(elem == 5){
                    c[j].GearBox += line[i];
                } else {
                    c[j].Color += line[i];
                }
            }
        }
        j++;
        elem = 0;
    }
    file.close();
}
void getInformation(int index) {
    cout << "=============================================" << endl;
    cout << "        Brand           | " << c[index].Brand << endl;
    cout << "=============================================" << endl;
    cout << "        MotorVolume     | " << c[index].MotorVolume << endl;
    cout << "        MinPrice        | " << c[index].MinPrice << endl;
    cout << "        MaxPrice        | " << c[index].MaxPrice << endl;
    cout << "        Mileage         | " << c[index].Mileage << endl;
    cout << "        GearBox         | " << c[index].GearBox << endl;
    cout << "        Color           | " << c[index].Color << endl;
    cout << endl;

}

void filterPrice(int minPrice , int maxPrice){
    int j = 0;
    for(int i = 0; i < s; i ++) {
        if(stoi(c[i].MinPrice) < minPrice && stoi(c[i].MaxPrice) > maxPrice){
            isExist(i);
        }
    }
}
void filterBrand(string brand) {
    for(int i = 0; i < s; i ++) {
        if(brand != c[i].Brand){
            isExist(i);
        }
    }
}
void filterColor(string color){
    for(int i = 0; i < s; i ++) {
        cout << (color != c[i].Color) << endl;
        if(color != c[i].Color){
            isExist(i);
        }
    }
}
void filterGearBox(string gearbox){
    int j = 0;
    for(int i = 0; i < s; i ++) {
        if(gearbox != c[i].GearBox){
            isExist(i);
        }
    }
}
void filterMileage(int minMileage, int maxMileage){
    int j = 0;
    for(int i = 0; i < s; i ++) {
        if(minMileage > stoi(c[i].Mileage) && maxMileage < stoi(c[i].Mileage)){
            isExist(i);
        }
    }
}
void filterMotorVolume(int minMotorVolume, int maxMotorVolume){
    int j = 0;
    for(int i = 0; i < s; i ++) {
        if(minMotorVolume > stoi(c[i].MotorVolume) && maxMotorVolume < stoi(c[i].MotorVolume)) {
            isExist(i);
        }
    }
}
void isExist(int i) {
    for(int j = 0; j < s; j++){
        if(arr[j] == i) {
            arr[j] = -1;
        }
    }
}
void New(){
    for(int j = 0; j < s; j++){
        arr[j] = j;
    }
}
