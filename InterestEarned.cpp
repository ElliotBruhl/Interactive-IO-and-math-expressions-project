#include <iostream>
using std::cout, std::cin;

int main() {
    //total = Principal * (1 + rate/t)^t
    double rate;
    int timesCompounded;
    double principal;

    cout << "What is the interest rate? ";
    cin >> rate;
    cout << "How many times is interest compounded? ";
    cin >> timesCompounded;
    cout << "What is the principal (initial amount)? ";
    cin >> principal;

    cout << "";

    return 0;
}