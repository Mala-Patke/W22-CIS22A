#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int weight;
    cout << "What is the weight of the package in kilograms (max 20kg)? " << flush;
    cin >> weight;
    
    if(weight <= 0){
        cout << "Weight must be greater than 0." << endl;
        return 0;
    } else if(weight > 20) {
        cout << "Weight must be less than 20." << endl;
        return 0;
    }

    int distance;
    cout << "What is the distance the package is to be shipped (min 10mi, max 2000mi)? " << flush;
    cin >> distance;

    if(distance < 10 || distance > 3000){
        cout << "We do not ship less than 10 or more than 3000 miles";
        return 0;
    }

    double rate;
    if(weight < 2) rate = 1.10;
    else if(weight < 6) rate = 2.20;
    else if(weight < 10) rate = 3.70;
    else rate = 4.80;

    double total = rate * (distance / 200 + 1);

    cout << fixed << setprecision(2) << "The shipping charge is $" << total << endl;

    return 0;
}