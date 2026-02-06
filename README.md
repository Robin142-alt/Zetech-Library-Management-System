# 📚 Zetech Online Library Management System

## 📝 Project Description
This system is built using **Object-Oriented Programming (OOP)** to manage a library's digital catalog. It provides a modular approach to handling book data and library operations.

## ⚙️ Design Choices
- **Classes:** Used `Book` for data encapsulation and `Library` for business logic.
- **Data Storage:** Utilized `std::vector` for dynamic memory management.
- **Input Handling:** Implemented `cin.ignore()` and `getline()` to handle spaces in book titles safely.

## 🧪 Testing (Validation Scenarios)
I have tested the following scenarios to ensure system robustness:
* **Search Functionality (Positive):** Searching for "C++" correctly identifies "C++ Fundamentals".
* **Borrowing Logic (Positive):** Successfully toggles `isAvailable` status to 'Borrowed'.
* **Invalid ISBN (Negative):** Attempting to borrow an ISBN that doesn't exist triggers an error message.
* **Double Borrowing (Negative):** Attempting to borrow a book already checked out is blocked by the system.

## 💻 Compilation Instructions
To run this project locally, use the following commands:
```bash
g++ main.cpp -o LibrarySystem
./LibrarySystem
