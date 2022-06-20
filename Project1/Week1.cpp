#include <iostream>
using namespace std;

void W1_32();
void W1_36();

int main()
{
    W1_32();
}

/// Prompt user to enter balance info, then calculate and print balance.
void W1_32()
{
    float startBalance, totalIn, totalOut, interest;
    cout << "Please enter Starting Balance, Total Deposited, "
         << "Total Withdrawn, then Interest Rate: ";
    cin >> startBalance >> totalIn >> totalOut >> interest;
    // No indication of time, so interest left out
    float currentBalance = startBalance + (totalIn - totalOut);
    cout << "Current Balance: $" << currentBalance;
}
/// Prompt user to enter width and height, then calculate and print area.
void W1_36()
{
    float width, height;
    cout << "Please enter width, then height: ";
    cin >> width;
    cin >> height;
    float area = width * height;
    cout << "Area: " << area;
}