#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int years;

    cout << "This program will calculate average rainfall over a period of years." << endl
        << "How many years do you wish to average? ";
    cin >> years;
    if(years < 1){
        cout << "Error: years must be 1 or greater" << endl;
        return 1;
    }

    double sum = 0;
    for(int i = 1; i <= years; i++){
        cout << endl << "Year " << i << endl;
        for(int j = 1; j <= 12; j++){
            int inches;
            cout << "Number of inches of rain for month " << j << "? ";
            cin >> inches;
            if(inches < 0) {
                cout << "Error: Inches must be a positive number. Please run the program again" << endl;
                return 1;
            }
            sum += inches;
        }
    }

    cout << fixed << setprecision(3)
         << endl << "Over a period of " << years*12 << " months, " << sum << " inches of rainfall fell." << endl
         << "Average monthly rainfall for the period is " << sum/(years*12) << endl;
    return 0;
}