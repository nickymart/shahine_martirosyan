#ifndef DATE_H
#define DATE_H

class Date {

  private:
    int day;
    int month;
    int year;

  public:
    Date(int day, int month, int year);

    int getDay();
    void setDay(int day);

    int getMonth();
    void setMonth(int month);

    int getYear();
    void setYear(int year);
};

#endif
