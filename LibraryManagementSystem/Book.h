#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

class Book {
    private:
        std::string title;
        std::string author;
        int isbn;
        bool availaible;
    public:
        Book(std::string t,std::string a,int isb);

        std::string getTitle();
        std::string getAuthor();
        int getIsbn();
        bool getAvailibility();
        void borrowBook();
        void returnBook();
        void display();

};

#endif


