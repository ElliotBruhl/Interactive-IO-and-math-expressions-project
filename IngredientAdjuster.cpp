#include <iostream>
using std::cout, std::cin;

int main() {
    //init amount per cookie - can be computed at compile time
    constexpr double cupsSugarPerCookie = 1.5/48;
    constexpr double cupsButterPerCookie = 1.0/48;
    constexpr double cupsFlourPerCookie = 2.75/48;

    //get input from user
    int numOfCookies;
    cout << "How many cookies do you want to make? ";
    while (true) {
        cin >> numOfCookies;
        if (cin.fail()) { //non number
            cin.clear();
            cin.ignore(32, '\n');
            cout << "Error reading input.\n";
        }
        else if (numOfCookies < 0) { //negative number
            cout << "Enter a positive integer.\n";
        }
        else break;
    }
    
    //display results
    cout << "To make " << numOfCookies << " cookie(s) you need:\n";
    cout << (cupsSugarPerCookie*numOfCookies) << " cup(s) of sugar\n";
    cout << (cupsButterPerCookie*numOfCookies) << " cup(s) of butter\n";
    cout << (cupsFlourPerCookie*numOfCookies) << " cup(s) of flour";

    return 0;
}