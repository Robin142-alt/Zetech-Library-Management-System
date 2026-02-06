#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include <vector>
#include <algorithm>

class Library {
private:
    vector<Book> books;

public:
    // Add Book
    void addBook(const Book& b) {
        books.push_back(b);
    }

    // Search Logic (Improved for partial matches)
    void searchBook(string query) {
        bool found = false;
        cout << "\n--- Search Results for '" << query << "' ---" << endl;
        for (const auto& book : books) {
            // Check if query exists in title or author
            if (book.getTitle().find(query) != string::npos || 
                book.getAuthor().find(query) != string::npos) {
                book.display();
                found = true;
            }
        }
        if (!found) cout << "No books found matching that criteria." << endl;
    }

    // Borrow Logic (Negative Scenario handling)
    void borrowBook(string targetIsbn) {
        for (auto& book : books) {
            if (book.getISBN() == targetIsbn) {
                if (book.getAvailability()) {
                    book.setAvailability(false);
                    cout << "\n>>> Success: You have checked out '" << book.getTitle() << "'" << endl;
                } else {
                    cout << "\n>>> Error: This book is already borrowed by someone else." << endl;
                }
                return;
            }
        }
        cout << "\n>>> Error: ISBN '" << targetIsbn << "' not found in system." << endl;
    }
};

#endif
