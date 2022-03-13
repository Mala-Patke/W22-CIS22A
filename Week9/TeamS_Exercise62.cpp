#include<iostream>
using namespace std;

void output(int startHour, int waitHour, int startMin, int waitMin) {
    int endTimeHour = startHour + waitHour;
    int endTimeMin = startMin + waitMin;
    if(endTimeMin >= 60) {
        endTimeMin -= 60;
        endTimeHour++;
    }
    if(endTimeHour >= 24) endTimeHour -= 24;

    cout << "24 hour time after waiting: " << endTimeHour << ":";
    if(endTimeMin < 10) cout << 0;
    cout << endTimeMin;
    cout << endl;
}

int main() {
    bool runAgain;
    do {
        runAgain = false;

        bool inpVal;
        char colon;

        int startHour;
        int startMin;
        do {
            inpVal = false;

            cout << "Enter the starting time (HH:MM 24hr): ";
            cin >> startHour >> colon >> startMin;

            if(startHour > 24 || startMin >= 60 || colon != ':') inpVal = true; 
        } while(inpVal);

        int waitHour;
        int waitMin;
        do {
            inpVal = false;

            cout << "Enter the starting time (HH:MM 24hr): ";
            cin >> waitHour >> colon >> waitMin;

            if(startHour > 24 || startMin >= 60 || colon != ':') inpVal = true; 
        } while(inpVal);

        output(startHour, waitHour, startMin, waitMin);

        char runAgainInput;
        cout << "Run again (y for yes, anything else for no): ";
        cin >> runAgainInput;
        if(runAgainInput == 'y' || runAgainInput == 'Y') runAgain = true;
    } while(runAgain);
    
    return 0;
}