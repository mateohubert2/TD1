//
// Created by HUBERT Mateo on 14/10/2023.
//

#include "date.h"
#include <iostream>
Date::Date(int month, int day, int year) : _month(month), _day(day), _year(year) {}

void Date::updateMonth(int month) {
    _month = month;
}

void Date::updateDay(int day) {
    _day = day;
}

void Date::updateYear(int year) {
    _year = year;
}

void Date::toString() const {
    std::cout << _month << "/" << _day << "/" << _year << std::endl;
}