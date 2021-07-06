//
// Created by Nikita on 06.07.2021.
//
#include "Book.h"
#include <string>

void Book::setAuthor(std::string author) {
    author_ = author;
}

void Book::setTitle(std::string title) {
    title_ = title;
}

void Book::setPages(int numberOfPages) {
    pages_ = numberOfPages;
}

void Book::setTypeBook(std::string type) {
    type_ = type;
}

void Book::setDateBook(Date date) {
    date_ = date;
}

void Book::inputBookInConsole() {
    std::string author;
    std::string title;
    int pages;
    Date date;
    std::string type;

    std::cout << "Добавление книги" << "\n";
    std::cout << "Введите автора книги:  ";
    std::getline(std::cin,author);
    setAuthor(author);

    std::cout << "Введите название книги:  ";
    std::getline(std::cin, title);
    setTitle(title);

    std::cout << "Введите количество страниц книги:  ";
    std::cin >> pages;
    setPages(pages);

    std::cout << "Введите тип книги:  ";
    std::getline(std::cin, type);
    setTypeBook(type);

    std::cout << "\nВведите дату издания книги:  " << "\n";
    date.setNewDate();
    setDateBook(date);
}

