//
// Created by Nikita on 06.07.2021.
//

#pragma once
#include "Date.h"
#include <iomanip>

void Date::printDate(const Date &date) {
    std::cout << "Day: " << date.day_ << " "
              << "Month: " << date.month_ << " "
              << "Year: " << date.year_ << std::endl;
}

void Date::setNewDate() {
    std::cout << " Введите дату (dd:mm:yyyy): ";
    std::cin >> std::setw(2) >> day_;
    std::cin.ignore();
    std::cin >> std::setw(2) >> month_;
    std::cin.ignore();
    std::cin >> std::setw(4) >> year_;
    while (!validateDate(day_, month_, year_)) {
        std::cout << "Неверный формат даты \n";
        setNewDate();
    }
}

bool Date::validateDate(int &day, int &month, int &year) {
    bool isleapYear = false;
    if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0) {
        isleapYear = true;
    }
    if (day < 1 || day > 31) {
        return false;
    }
    if (month < 1 || month > 12) {
        return false;
    }
    if (month == 2 && day > 29 && isleapYear) {
        return false;
    }
    if (month == 2 && day > 28 && !isleapYear) {
        return false;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day > 30) {
            return false;
        }
    }
    return true;
}