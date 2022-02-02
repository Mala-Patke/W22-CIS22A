#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double price;
    int quantity;
    const double discountPercent = 0.1;

    cout << "What is the Price? " << flush;
    cin >> price;
    cout << "What is the Quantity? " << flush;
    cin >> quantity;

    double totalPrice = price * quantity;
    double totalDiscountedPrice = totalPrice - discountPercent * totalPrice;

    cout << fixed << setprecision(2);
    cout << endl << "Total Owed: $" << totalDiscountedPrice << endl;

    return 0;
}