#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    double amountOwed;
    int amountPaid;

    cout << "Enter the amount owed: " << flush;
    cin >> amountOwed;
    cout << "Enter the amount paid: " << flush;
    cin >> amountPaid;

    if(amountOwed < amountPaid){
        double change = amountPaid - amountOwed;
        double changeout = change;
        int dollars = 0;
        int quarters = 0;
        int dimes = 0;
        int nickels = 0;
        int pennies = 0;

        if(change >= 1.0) {
            dollars += floor(change);
            change -= floor(change);
        }

        if(change >= 0.25){
            quarters += floor(change / 0.25);
            change -= 0.25 * floor(change / 0.25);
        }

        if(change >= 0.1){
            dimes += floor(change / 0.1);
            change -= 0.1 * floor(change / 0.1);
        }

        if(change >= 0.05){
            nickels += floor(change / 0.05);
            change -= 0.05 * floor(change / 0.05);
        }

        if(change >= 0){
            pennies += floor(round(change*100)/100 / 0.01); //The round is used to deal with floating point imprecision. Change prints as 0.03, but is probably represented as 0.2999999999
            change -= 0.01 * floor(change / 0.01);
        }

        cout << fixed << setprecision(2) << endl;
        cout << "Change: " << changeout << endl;
        cout << "Dollars: " << dollars << endl;
        cout << "Quarters: " << quarters << endl;
        cout << "Dimes: " << dimes << endl;
        cout << "Nickels: " << nickels << endl;
        cout << "Pennies: " << pennies << endl;

    } else {
        cout << "The amount paid is less than the amount owed. Please run the program again.";
    }

    return 0;
}