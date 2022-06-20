#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/**
 * Rounds float to the nearest cent (I hope, this took a lot of trial and error
 * to get it not to add trailing 0's).
 *
 * Undefined behavior if result of rounding adds more or less than four 0's.
 * I don't know why it adds them so I only know that it works in the scope of this project.
 *
 * @param price a float of arbitrary precision representing cost of meal.
 * @returns string of number rounded to 2nd decimal place.
 */
string cents(float price)
{
    float rounded = (round(price * 100) / 100) + 0.001;
    string str_rounded = to_string(rounded);
    return str_rounded.substr(0, str_rounded.length()-4);
    // Man oh man do I miss Python's round() right now.
}

/**
 * Provides formatted visual of tax and tip calculations.
 *
 * @param subtotal the cost, of arbitrary precision, of the meal before tax and
 * tip calculations.
 * @returns receipt as multiline string.
 */
string billCalculator(float subtotal)
{
    string str_subtotal = cents(subtotal),
            tax = cents(subtotal * 0.0675),
            tip = cents((subtotal * 1.0675) * 0.2),
            total = cents(1.281 * subtotal); // 1.0675x + 0.2(0.675x)
    string answer = "Subtotal:  $" + str_subtotal +
                    "\nTax:       $" + tax +
                    "\nTip:       $" + tip +
                    "\n\nTotal:     $" + total;
    return answer;
}

int main()
{
    float mealPrice = 88.67;
    cout << "------------------\n"
         << billCalculator(mealPrice)
         << "\n\n------------------\nCustomer Copy\n\n";
}