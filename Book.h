#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    string isbn;
    bool isAvailable;

public:
    // Constructor
    Book(string t, string a, string i) 
        : title(t), author(a), isbn(i), isAvailable(true) {}

    // Getters (const ensures they don't modify data)
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    string getISBN() const { return isbn; }
    bool getAvailability() const { return isAvailable; }

    // Setters
    void setAvailability(bool status) { isAvailable = status; }

    // Display function
    void display() const {
        cout << "------------------------------------" << endl;
        cout << "Title:  " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN:   " << isbn << endl;
        cout << "Status: " << (isAvailable ? "Available" : "Borrowed") << endl;
    }
};

#endif
