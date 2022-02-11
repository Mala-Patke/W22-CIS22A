#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int select;
    int hours;

    cout << "Select a subscription package" << endl
         << "1. Package A" << endl
         << "2. Package B" << endl
         << "3. Package C" << endl
         << "4. Quit" << endl << endl;
    cin >> select;
    if(select == 4) return 0;
    else if(select > 4){
        cout << "Please select a number between 1 and 4." << endl;
        return 0;
    }

    cout << "How many hours were used? " << flush;
    cin >> hours;
    if(hours > 744) {
        cout << "The maximum number of hours is 744." << endl;
        return 0;
    }

    double res;
    switch(select) {
        case 1:
            res = (hours - 10 > 0) ? 9.95 + 2 * (hours - 10) : 9.95;
            break;
        case 2: 
            res = (hours - 20 > 0) ? 14.95 + (hours - 20) : 14.95;
            break;
        case 3: 
            res = 19.95;
            break; 
    }

    cout << fixed << setprecision(2) << "The total amount due is $" << res << endl;
    
    return 0;
}