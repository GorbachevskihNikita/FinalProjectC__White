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

#pragma once
#include <iostream>
#include <string>
#include <clocale>
#include "src/Date.cpp"
#include "src/Book.cpp"

int main() {
    std::setlocale(LC_ALL, "Russian");
    Book book;
    std::string reply;

    book.inputBookInConsole();
    std::cout << "Добавить еще одну книгу? (да/нет): ";
    std::getline(std::cin,reply);
    while (reply == "да" && !reply.empty()){
        book.inputBookInConsole();
    }
    return 0;
}
