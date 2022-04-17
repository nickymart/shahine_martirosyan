#include "./date.h"

Date::Date(int Day, int Month, int Year){
  day = Day;
  month = Month;
  year = Year;
}

Date::Date(){
  day = 0;
  month = 0;
  year = 0;
}

int Date::getDay() {
  return Day;
}

void Date::setDay(int day) {
  Day = day;
}

int Date::getMonth() {
  return Month;
}

void Date::setMonth(int month) {
  Month = month;
}

int Date::getYear() {
  return Year;
}

void Date::setYear(int year) {
  Year = year;
}

