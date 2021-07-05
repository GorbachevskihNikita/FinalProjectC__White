//
// Created by Nikita on 23.06.2021.
//

#ifndef FINALPROJECTC__WHITE_BOOK_H
#define FINALPROJECTC__WHITE_BOOK_H

#endif //FINALPROJECTC__WHITE_BOOK_H

class Book {
public:
    void setAuthor(std::string author) {
        author_ = author;
    };
    void setTitle(std::string title) {
        title_ = title;
    };
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