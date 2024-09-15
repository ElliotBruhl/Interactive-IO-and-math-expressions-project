#include <iostream>
#include <iomanip>
#include <cmath>
using std::cout, std::cin, std::left, std::right, std::setw, std::endl;

int main() {
    //init
    double rate;
    int timesCompounded;
    double principal;

    //get user input
    cout << "What is the interest rate as percent (don't include percent sign)? ";
    cin >> rate;
    rate /= 100; //convert to decimal
    cout << "How many times is interest compounded? ";
    cin >> timesCompounded;
    cout << "What is the principal (don't include dollar sign)? ";
    cin >> principal;

    //calculate interest: interest = principal*(1+Rate/T)^T
    double total = principal * pow((1+rate/timesCompounded), timesCompounded);

    //display formatted results
    cout << std::fixed << std::setprecision(2);
    cout << left << setw(20) << "Interest Rate:"     << right << setw(9) << (rate*100) << "%" << endl;
    cout << left << setw(20) << "Times Compounded:"  << right << setw(10) << timesCompounded << endl;
    cout << left << setw(20) << "Principal:"         << right << setw(1) << "$" << setw(9) << principal << endl;
    cout << left << setw(20) << "Interest:"          << right << setw(1) << "$" << setw(9) << (total-principal) << endl;
    cout << left << setw(20) << "Amount in Savings:" << right << setw(1) << "$" << setw(9) << total << endl;

    return 0;
}