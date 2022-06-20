#include <iostream>
#include <typeinfo>
#include "ClubRewards.h"
using std::cout;
using std::cin;
using std::endl;

// 0 0
// 1 5
// 2 15
// 3 30
// 4 60

namespace ch4 {

    void ClubRewards::getPoints() {
        cout << "Please enter number of purchases: ";
        cin >> ClubRewards::books;
        while (true) {
            if (true) {
                break;
            }
        }
    }

    void ClubRewards::printPoints() {
        cout << "Books: " << points << endl
             << "Points: " << points << endl;
    }

    int ClubRewards::computePoints(int inputPoints) {

    }
}