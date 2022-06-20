#include <iostream>
using namespace std;

void W1_32();
void W1_36();

int main()
{
    W1_36();
}

/// Prompts user to input balance info, then calculates and prints current balance.
/// No params.
/// No return.
void W1_32()
{
    float startBalance, totalIn, totalOut, interest;
    cout << "Please enter Starting Balance, Total Deposited, "
         << "Total Withdrawn, then Interest Rate: " << endl;
    cin >> startBalance >> totalIn >> totalOut >> interest;
    // No indication of time, so interest left out
    float currentBalance = startBalance + (totalIn - totalOut);
    cout << "Current Balance: $" << currentBalance << endl;
}

/// Prompts user to input width and height, then calculates and prints an area.
/// No params.
/// No return.
void W1_36()
{
    float width, height;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;
    float area = width * height;
    cout << "Area: " << area;
}