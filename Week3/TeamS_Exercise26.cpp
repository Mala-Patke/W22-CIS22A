#include <iostream>
using namespace std;

int main(){ 
    int numStocks = 600;
    double pricePerShare = 21.77;
    double commission = 0.02;

    double stocksPrice = numStocks * pricePerShare;
    double commissionPrice = stocksPrice * commission;
    double total = stocksPrice + commission;

    cout << "Stock: $" << stocksPrice << endl;
    cout << "Commission: $" << commissionPrice << endl;
    cout << "Total: $" << total << endl;

    return 0;
}