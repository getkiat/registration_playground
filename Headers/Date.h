#ifndef DATE_H
#define DATE_H

#include <string>

using namespace std;


class Date
{
private:
    int day;
    int month;
    string mmm;
    int year;
    int datesort;
    
public:
    Date();
    Date(int d,int m,int y);
    long setDate(int, int ,int);
    int convertDate(int, int, int);
    void getDate();
};

#endif // DATE_H
