/**
     Класс «Книги»
     Поля: Автор, Название, Издательство, Дата, Количество страниц, Тип книги.
     Вывести:
        а) список книг заданного автора;
        б) список книг, выпущенных заданным издательством;
        в) список книг, выпущенных после заданного года.
        г) Дата и время года
     Класс «Дата»
     Поля: День, Месяц, Год
     Перегруженные операции: сравнение двух дат (< , >).
 **/

#include <iostream>
#include <string>


class Date {
public:
    void printDate(const Date &date);
    void setNewDate();
    int getDay() const { return day_; }
    int getMonth() const { return month_; }
    int getYear() const { return year_; }
private:
    int day_;
    int month_;
    int year_;
};


void Date::printDate(const Date &date) {
    std::cout << "Day: " << date.day_ << " "
              << "Month: " << date.month_ << " "
              << "Year: " << date.year_ << std::endl;
}


void Date::setNewDate() {
    std::cout << "Input Day: " << std::endl;
    std::cin >> Date::day_;
    std::cout << "Input Month: " << std::endl;
    std::cin >> Date::month_;
    std::cout << "Input Year: " << std::endl;
    std::cin >> Date::year_;
}

class Book {
public:
    void setAuthor(std::string author);
    void setTitle(std::string title);
    void setDatePublishing(Date datePublishing);

private:
    std::string author;
    std::string title;
    Date date;
    int pages;
    std::string type;
};



int main() {
    Date date;
    date.setNewDate();
    date.printDate(date);
    return 0;
}
