#include <iostream>
#include <string>
#include "../Headers/Date.h"

string mmmArr[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun","Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

using namespace std;

Date::Date()
{
    day=16;
    month=10;
    year=2022;
}
 
Date::Date(int d,int m,int y)
{
    this->day=d;
    this->month=m;
    this->mmm = mmmArr[month-1];
    this->year=y;
}

int Date::convertDate(int month, int day, int year)
{
    datesort = (year * 10000) + (month * 100) + day;
    return datesort;
}


long Date::setDate(int dd, int mm ,int yyyy)
{
    long longdate;
    this->day=dd;
    this->month=mm;
    this->mmm = mmmArr[month-1];
    this->year=yyyy;
    
    longdate = convertDate(month, day, year);
    return longdate;
}

void Date::getDate()
{
    cout << endl;
    cout << "\nDate: ";
    cout << day  << ' ' <<  mmm << ' ' << year % 100;
    cout << endl;

    return;
}



