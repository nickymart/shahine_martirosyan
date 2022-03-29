#include <iostream>
#include <string>
using namespace std;

bool is_word(string);
char to_lower(char);
string to_lower(string);
int index_of_city(string*, int, string) ;
void take_out_the_city(string*, int);
bool is_started_in_last_letter(string, string);
string get_city_name(string*, int , string );
int main()
{
    string list_of_cities[]  = 
    {
        "Aberdeen", "Abilene", "Akron", "Albany", "Albuquerque", "Alexandria", "Allentown", "Amarillo", "Anaheim", "Anchorage", "Ann Arbor", "Antioch", "Apple Valley", "Appleton", "Arlington", "Arvada", "Asheville", "Athens", "Atlanta", "Atlantic City", "Augusta", "Aurora", "Austin", 
        "Bakersfield", "Baltimore", "Barnstable", "Baton Rouge", "Beaumont", "Bel Air", "Bellevue", "Berkeley", "Bethlehem", "Billings", "Birmingham", "Bloomington", "Boise", "Boise City", "Bonita Springs", "Boston", "Boulder", "Bradenton", "Bremerton", "Bridgeport", "Brighton", "Brownsville", "Bryan", "Buffalo", "Burbank", "Burlington", 
        "Cambridge", "Canton", "Cape Coral", "Carrollton", "Cary", "Cathedral City", "Cedar Rapids", "Champaign", "Chandler", "Charleston", "Charlotte", "Chattanooga", "Chesapeake", "Chicago", "Chula Vista", "Cincinnati", "Clarke County", "Clarksville", "Clearwater", "Cleveland", "College Station", "Colorado Springs", "Columbia", "Columbus", "Concord", "Coral Springs", "Corona", "Corpus Christi", "Costa Mesa", 
        "Dallas", "Daly City", "Danbury", "Davenport", "Davidson County", "Dayton", "Daytona Beach", "Deltona", "Denton", "Denver", "Des Moines", "Detroit", "Downey", "Duluth", "Durham",
        "El Monte", "El Paso", "Elizabeth", "Elk Grove", "Elkhart", "Erie", "Escondido", "Eugene", "Evansville",
        "Fairfield", "Fargo", "Fayetteville", "Fitchburg", "Flint", "Fontana", "Fort Collins", "Fort Lauderdale", "Fort Smith", "Fort Walton Beach", "Fort Wayne", "Fort Worth", "Frederick", "Fremont", "Fresno", "Fullerton", 
        "Gainesville", "Garden Grove", "Garland", "Gastonia", "Gilbert", "Glendale", "Grand Prairie", "Grand Rapids", "Grayslake", "Green Bay", "GreenBay", "Greensboro", "Greenville", "Gulfport-Biloxi", 
        "Hagerstown", "Hampton", "Harlingen", "Harrisburg", "Hartford", "Havre de Grace", "Hayward", "Hemet", "Henderson", "Hesperia", "Hialeah", "Hickory", "High Point", "Hollywood", "Honolulu", "Houma", "Houston", "Howell", "Huntington", "Huntington Beach", "Huntsville", 
        "Independence", "Indianapolis", "Inglewood", "Irvine", "Irving",
        "Jackson", "Jacksonville", "Jefferson", "Jersey City", "Johnson City", "Joliet", 
        "Kailua", "Kalamazoo", "Kaneohe", "Kansas City", "Kennewick", "Kenosha", "Killeen", "Kissimmee", "Knoxville", 
        "Lacey", "Lafayette", "Lake Charles", "Lakeland", "Lakewood", "Lancaster", "Lansing", "Laredo", "Las Cruces", "Las Vegas", "Layton", "Leominster", "Lewisville", "Lexington", "Lincoln", "Little Rock", "Long Beach", "Lorain", "Los Angeles", "Louisville", "Lowell", "Lubbock", 
        "Macon", "Madison", "Manchester", "Marina", "Marysville", "McAllen", "McHenry", "Medford", "Melbourne", "Memphis", "Merced", "Mesa", "Mesquite", "Miami", "Milwaukee", "Minneapolis", "Miramar", "Mission Viejo", "Mobile", "Modesto", "Monroe", "Monterey", "Montgomery", "Moreno Valley", "Murfreesboro", "Murrieta", "Muskegon", "Myrtle Beach", 
        "Naperville", "Naples", "Nashua", "Nashville", "New Bedford", "New Haven", "New London", "New Orleans", "New York", "New York City", "Newark", "Newburgh", "Newport News", "Norfolk", "Normal", "Norman", "North Charleston", "North Las Vegas", "North Port", "Norwalk", "Norwich",
        "Oakland", "Ocala", "Oceanside", "Odessa", "Ogden", "Oklahoma City", "Olathe", "Olympia", "Omaha", "Ontario", "Orange", "Orem", "Orlando", "Overland Park", "Oxnard", 
        "Palm Bay", "Palm Springs", "Palmdale", "Panama City", "Pasadena", "Paterson", "Pembroke Pines", "Pensacola", "Peoria", "Philadelphia", "Phoenix", "Pittsburgh", "Plano", "Pomona", "Pompano Beach", "Port Arthur", "Port Orange", "Port Saint Lucie", "Port St. Lucie", "Portland", "Portsmouth", "Poughkeepsie", "Providence", "Provo", "Pueblo", "Punta Gorda", 
        "Racine", "Raleigh", "Rancho Cucamonga", "Reading", "Redding", "Reno", "Richland", "Richmond", "Richmond County", "Riverside", "Roanoke", "Rochester", "Rockford", "Roseville", "Round Lake Beach", 
        "Sacramento", "Saginaw", "Saint Louis", "Saint Paul", "Saint Petersburg", "Salem", "Salinas", "Salt Lake City", "San Antonio", "San Bernardino", "San Buenaventura", "San Diego", "San Francisco", "San Jose", "Santa Ana", "Santa Barbara", "Santa Clara", "Santa Clarita", "Santa Cruz", "Santa Maria", "Santa Rosa", "Sarasota", "Savannah", "Scottsdale", "Scranton", "Seaside", "Seattle", "Sebastian", "Shreveport", "Simi Valley", "Sioux City", "Sioux Falls", "South Bend", "South Lyon", "Spartanburg", "Spokane", "Springdale", "Springfield", "St. Louis", "St. Paul", "St. Petersburg", "Stamford", "Sterling Heights", "Stockton", "Sunnyvale", "Syracuse", 
        "Tacoma", "Tallahassee", "Tampa", "Temecula", "Tempe", "Thornton", "Thousand Oaks", "Toledo", "Topeka", "Torrance", "Trenton", "Tucson", "Tulsa", "Tuscaloosa", "Tyler", 
        "Utica", 
        "Vallejo", "Vancouver", "Vero Beach", "Victorville", "Virginia Beach", "Visalia", 
        "Waco", "Warren", "Washington", "Waterbury", "Waterloo", "West Covina", "West Valley City", "Westminster", "Wichita", "Wilmington", "Winston", "Winter Haven", "Worcester",
        "Yakima", "Yonkers", "York", "Youngstown"
    };
    int live = 3;
    int size = 385;
    string name_of_city = "/";
    string last = "/";
    int who;
    cout << "Who is one?(1 - Player, 0 - Computer)\n";
    cin >> who;
    cin.ignore();
    while(true){
        if(!who) {
            if(name_of_city == "Error!"){
                cout << "You Won!" << endl;
                return 0;
            }
            cout << "Computer: ";
            last = name_of_city;
            name_of_city = get_city_name(list_of_cities, size, last);
            take_out_the_city(list_of_cities, index_of_city(list_of_cities, size, name_of_city));
            who = 1;
            cout << name_of_city << endl;
        } 
        if(who) {
            cout << "Player: ";
            last = name_of_city;
            getline(cin, name_of_city);
            who = 0;
        }
        while (!is_word(name_of_city) || index_of_city(list_of_cities, size, name_of_city) == -1 
               || !is_started_in_last_letter(last, name_of_city)){
            live --;
            if(live == 0){
                cout << "Game Over!" << endl;
                return 0;
            }
            cout <<  "Enter correctly։ ";
            cin >> name_of_city;
        }
        take_out_the_city(list_of_cities, index_of_city(list_of_cities, size, name_of_city));
    }
    return 0;
}
bool is_word(string name_of_city){
    name_of_city = to_lower(name_of_city);
    for(int i = 0; i < name_of_city.size(); i++){
        if(!(name_of_city[i] >= 'a' && name_of_city[i] <= 'z' || name_of_city[i] != ' ' || name_of_city[i] != '-')){
            return 0;
        }
    }  
    return 1;
}
char to_lower(char c) {
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    return c;
}
string to_lower(string word) {
    for (int i = 0; i < word.size(); i ++){
        word[i] = to_lower(word[i]);
    }
    return word;
}
int index_of_city(string* list_of_cities, int size, string name_of_city) {
    for(int i = 0; i < size; i++){
        if(to_lower(list_of_cities[i]) == to_lower(name_of_city)){
            return i;
        }
    }  
    return -1;
}
bool is_started_in_last_letter(string first, string second){

    if(to_lower(first[first.size() - 1]) == to_lower(second[0])|| first == "/" ){
        return 1;
    }
    return 0;
}
void take_out_the_city(string list_of_cities[], int index){
    list_of_cities[index] = "0";
}
string get_city_name(string* list_of_cities, int size, string last){
    for(int i = 0; i < size; i ++){
        if(last == "/" || to_lower(list_of_cities[i][0]) == to_lower(last[last.size() - 1])){
            return list_of_cities[i];
        }
    }
    return "Error!";
}
