#include <iostream>
#include <limits>
#include "Library.h"

using namespace std;

void displayHeader() {
    cout << "\n========================================" << endl;
    cout << "   ZETECH UNIVERSITY LIBRARY SYSTEM" << endl;
    cout << "========================================" << endl;
    cout << "1. Add New Book" << endl;
    cout << "2. Search Catalog" << endl;
    cout << "3. Borrow a Book (by ISBN)" << endl;
    cout << "4. Exit" << endl;
    cout << "Choose an option: ";
}

int main() {
    Library myLibrary;
    int choice = 0;

    // Seed data for the demonstration
    myLibrary.addBook(Book("C++ Fundamentals", "Bjarne Stroustrup", "101"));
    myLibrary.addBook(Book("Clean Code", "Robert Martin", "202"));
    myLibrary.addBook(Book("Data Structures", "Ellis Horowitz", "303"));

    while (choice != 4) {
        displayHeader();
        
        // Error handling for non-integer input
        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number (1-4)." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        cin.ignore(); // Clear buffer

        if (choice == 1) {
            string t, a, i;
            cout << "Enter Title: "; getline(cin, t);
            cout << "Enter Author: "; getline(cin, a);
            cout << "Enter ISBN: "; getline(cin, i);
            myLibrary.addBook(Book(t, a, i));
            cout << "Book registered successfully!" << endl;

        } else if (choice == 2) {
            string q;
            cout << "Enter Title or Author to search: "; getline(cin, q);
            myLibrary.searchBook(q);

        } else if (choice == 3) {
            string i;
            cout << "Enter ISBN to borrow: "; getline(cin, i);
            myLibrary.borrowBook(i);

        } else if (choice == 4) {
            cout << "System shutting down. Goodbye!" << endl;
        } else {
            cout << "Option not recognized." << endl;
        }
    }

    return 0;
}
