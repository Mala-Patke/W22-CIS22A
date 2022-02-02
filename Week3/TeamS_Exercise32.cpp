#include <iostream>
using namespace std;

int main(){ 
    int stock;
    int purchased;
    int sold;

    cout << "What is the beginning stock? ";
    cin >> stock;
    cout << "What is the number purchased? ";
    cin >> purchased;
    cout << "What is the number sold? ";
    cin >> sold;

    cout << endl << "Ending stock: " << stock + purchased - sold;

    return 0;
}