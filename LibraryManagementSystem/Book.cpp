#include "Book.h"

using namespace std;

Book::Book(string ti, string auth, int isb){
    title=ti;
    author=auth;
    isbn=isb;
    availaible=true;
}

string Book::getAuthor(){
    return author;
}

string Book::getTitle(){
    return title;
}

int Book::getIsbn(){
    return isbn;
}

bool Book::getAvailibility(){
    return availaible;
}

void Book::borrowBook(){
    if(availaible=false){
        cout << "The book is not availible now!" << endl;
    }
    availaible=false;
    cout << "The book " << title << "has been borrowed!" << endl;
}

void Book::returnBook(){
    availaible=true;
    cout << "The book" << title << " has been returned!" << endl;
}

void Book::display(){
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "ISBN: " << isbn << endl;
    cout << "Availibility: " << (availaible ? "Yes" : "No") << endl;
}






