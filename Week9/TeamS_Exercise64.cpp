#include<iostream>
#include<iomanip>
using namespace std;

int promptNumEmployees() {
    int ret;
    do {
        cout << "How many employees are there in the company? ";
        cin >> ret;
    } while(ret < 0);
    return ret;
}

int promptNumDays(int numEmployees) {
    int total = 0;
    for(int i = 0; i < numEmployees; i++){
        int input;
        do {
            cout << "How many days did employee " << i+1 << " miss? ";
            cin >> input;
        } while(input <= 0);
        total += input;
    }
    return total;
}

double avgAbsentDays(int numEmployees, int numDays) {
    return numDays/numEmployees;
}

int main() {
    int numEmployees = promptNumEmployees();
    int numDays = promptNumDays(numEmployees);
    double avgDays = avgAbsentDays(numEmployees, numDays);

    cout << "The average number of days missed was " << fixed << setprecision(2) << avgDays << "." << endl;

    return 0;
}