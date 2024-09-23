#include <iostream>
using std::cout, std::cin;

int main() {
    //init amount per cookie
    double cupsSugarPerCookie = 1.5/48;
    double cupsButterPerCookie = 1.0/48;
    double cupsFlourPerCookie = 2.75/48;

    //get input from user
    int numOfCookies;
    cout << "How many cookies do you want to make? ";
    cin >> numOfCookies;
    
    //display results
    cout << "To make " << numOfCookies << " cookie(s) you need:\n";
    cout << (cupsSugarPerCookie*numOfCookies) << " cup(s) of sugar\n";
    cout << (cupsButterPerCookie*numOfCookies) << " cup(s) of butter\n";
    cout << (cupsFlourPerCookie*numOfCookies) << " cup(s) of flour";

    return 0;
}
