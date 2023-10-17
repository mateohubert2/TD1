//
// Created by HUBERT Mateo on 14/10/2023.
//

#ifndef TD1_DATE_H
#define TD1_DATE_H

class Date {
public:
    Date(int month, int day, int year);
    void updateMonth(int month);
    void updateDay(int day);
    void updateYear(int year);
    void toString() const;
private:
    int _day;
    int _month;
    int _year;
};

#endif //TD1_DATE_H
