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
    bool validateDate(int &day, int &month, int &year);
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
    std::cout << "Input Day: ";
    std::cin >> Date::day_;
    std::cout << " Input Month: ";
    std::cin >> Date::month_;
    std::cout << " Input Year: ";
    std::cin >> Date::year_;
    validateDate(day_, month_, year_);
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


class Book {
public:
    void setAuthor(std::string author) {
        author_ = author;
    };
    void setTitle(std::string title) {
        title_ = title;
    };
    void setDatePublishing(Date datePublishing);
    void setPages(int numberOfPages) {
        pages_ = numberOfPages;
    }
    void setTypeBook(std::string type) {
        type_ = type;
    }
    void setDateBook(Date date) {
        date_ = date;
    };
    void inputBookInConsole();
    std::string getBook();

private:
    std::string author_;
    std::string title_;
    int pages_;
    std::string type_;
    Date date_;
};

void Book::inputBookInConsole() {
    std::string author;
    std::string title;
    int pages;
    Date date;
    std::string type;
    std::cout << "Добавление книги" << "\n";
    std::cout << "Введите автора книги:  ";
    std::cin >> author;

    setAuthor(author);
    std::cout << "Введите название книги:  ";
    std::cin >> title;

    setTitle(title);
    std::cout << "Введите количество страниц книги:  ";
    std::cin >> pages;

    setPages(pages);
    std::cout << "Введите тип книги:  ";
    std::cin >> type;

    setTypeBook(type);
    std::cout << "Введите дату издания книги:  " << "\n";
    date.setNewDate();
}

std::string Book::getBook() {
    return std::string();
}

int main() {
    Book book;
    book.setBookInConsole();
    return 0;
}
