#include<iostream>
using namespace std;

int calcTotalCharges(int numDays, int roomRate, int medCharges, int labFees) {
    return numDays * roomRate + medCharges + labFees;
}

int calcTotalCharges(int medCharges, int labFees) {
    return medCharges + labFees;
}

int main() {
    char inOrOut;
    do {
        cout << "In patient or out patient (i or o)? ";
        cin >> inOrOut;
    } while(inOrOut != 'i' && inOrOut != 'o');

    int total;
    if(inOrOut == 'i') {
        int numDays;
        int roomRate;
        int medCharge;
        int labFees;

        do {
            cout << "Number of days in the hospital: ";
            cin >> numDays;
        } while (numDays <= 0);
        do {
            cout << "Room rate: $";
            cin >> roomRate;
        } while (roomRate <= 0);
        do {
            cout << "Medication Charges: $";
            cin >> medCharge;
        } while (medCharge <= 0);
        do {
            cout << "Lab fees: $";
            cin >> labFees;
        } while (labFees <= 0); 

        total = calcTotalCharges(numDays, roomRate, medCharge, labFees);       
    } else {
        int medCharge; 
        int labFees;

        do {
            cout << "Medication Charges: $";
            cin >> medCharge;
        } while (medCharge <= 0);
        do {
            cout << "Lab fees: $";
            cin >> labFees;
        } while (labFees <= 0);

        total = calcTotalCharges(medCharge, labFees);       
    }

    cout << endl << "Total charges are $" << total << endl;

    return 0;
}