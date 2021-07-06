//
// Created by Nikita on 06.07.2021.
//

class Date {
public:
    void printDate(const Date& date);
    void setNewDate();
    bool validateDate(int& day, int& month, int& year);
    int getDay();
    int getMonth();
    int getYear();

private:
    int day_;
    int month_;
    int year_;
};