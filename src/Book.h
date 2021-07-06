//
// Created by Nikita on 06.07.2021.
//

#pragma once
#include <string>
#include "Date.h"

class Book {
public:
    void setAuthor(std::string author);
    void setTitle(std::string title);
    void setPages(int numberOfPages);
    void setTypeBook(std::string type);
    void setDateBook(Date date);
    void inputBookInConsole();

private:
    std::string author_;
    std::string title_;
    std::string type_;
    int pages_;
    Date date_;
};