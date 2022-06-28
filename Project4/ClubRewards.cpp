#include <iostream>
#include <typeinfo>
#include "ClubRewards.h"
using std::cout;
using std::cin;
using std::endl;

namespace ch4 {

    void ClubRewards::computePoints() {
        if (books == 0) {
            points = 0;
        }
        else if (books == 1) {
            points = 5;
        }
        else if (books == 2) {
            points = 15;
        }
        else if (books == 3) {
            points = 30;
        }
        else {
            points = 60;
        }
    }

    void ClubRewards::getBooks() {
        // Creates infinite loop if string or char entered. [FIX]
        while (true) {
            cout << "Please enter number of books purchased: ";
            cin >> books;
            if (typeid(books) == typeid(1)) {       // if integer
                if (books > 0) {                    // if positive
                    break;
                }
            }
            cin.clear();
        }
        computePoints();
    }

    void ClubRewards::printPoints() {
        cout << "Books: " << books << endl
             << "Points: " << points << endl;
    }
}
