#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double arr[10] = { 10.5, 25.5, 9.75, 6.0, 35.0, 100.4, 10.65, .56, 14.75, 4.78 };
    int pct;
    
    cout << "Enter increase percentage: ";
    cin >> pct;

    for(int i = 0; i < 10; i++) {
        arr[i] *= pct * 0.01 + 1;
    }

    cout << fixed << setprecision(2);
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}