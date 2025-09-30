/*
 Abdullah Sajid
 ID: 190263
 Laboratory 1
 Sep 25, 2020
 */

#include <iostream>
using namespace std;

int main() {

    int numToonies, numLoonies, numQuarters, numDimes, numNickels, sumOfPennies;
    const int TOONIE = 200, LOONIE = 100, QUARTER = 25, DIME = 10, NICKEL = 5;
    cout << "How many toonies? ";
    cin >> numToonies;

    cout << "How many loonies? ";
    cin >> numLoonies;

    cout << "How many quarters? ";
    cin >> numQuarters;

    cout << "How many dimes? ";
    cin >> numDimes;

    cout << "How many nickels? ";
    cin >> numNickels;

   // calculating the number of penny

    sumOfPennies = numToonies*TOONIE + numLoonies*LOONIE + numQuarters*QUARTER + numDimes*DIME + numNickels*NICKEL;

    cout << "That adds up to " << sumOfPennies << " pennies. " << endl;
    return 0;

}
