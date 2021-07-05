//
// Created by Nikita on 23.06.2021.
//

#ifndef FINALPROJECTC__WHITE_DATE_H
#define FINALPROJECTC__WHITE_DATE_H

#endif //FINALPROJECTC__WHITE_DATE_H

class Date {
public:
    void printDate(const Date &date);
    void setNewDate();
    bool validateDate(int &day, int &month, int &year);
    int getDay() const { return day_; }
    int getMonth() const { return month_; }
    int getYear() const { return year_; }
private:
    int day_;
    int month_;
    int year_;
};