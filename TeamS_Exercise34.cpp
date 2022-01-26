#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double price;
    int quantity;

    cout << "What is the Price? " << flush;
    cin >> price;
    cout << "What is the Quantity? " << flush;
    cin >> quantity;

    cout << fixed << setprecision(2);
    cout << endl << "Total Price: " << price * quantity * 0.9 << endl;

    return 0;
}