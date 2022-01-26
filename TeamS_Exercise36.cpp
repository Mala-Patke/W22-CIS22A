#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main(){
    srand(time(0));
    int random1 = (rand() % 1000) + 1;
    int random2 = (rand() % 1000) + 1;
    char tmp;

    cout << right << setw(8) << random1 << endl;
    cout << "+" << right << setw(7) << random2 << endl; 
    cout << right << setw(8) << setfill('-') << "-" << flush;
    cin >> tmp;
    cout << right << setw(8) << setfill(' ') << random1 + random2 << endl;    
    return 0;
}