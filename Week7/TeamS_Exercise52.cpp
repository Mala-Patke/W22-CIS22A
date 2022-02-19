#include<iostream>
using namespace std;

int main() {
    int max = -99;
    int min = -99;
    int inp;

    cout << "Enter a series of integers and I will tell you the highest and lowest number. Enter -99 to quit" << endl;
    cout << "Enter here: ";

    while(inp != 99){
        cin >> inp;
        if(inp == -99) break;
        if(min == -99 || inp < min) min = inp;
        if(max == -99 || inp > max) max = inp;
    }

    if(min == -99 || max == -99) cout << "You didn't enter any numbers!" << endl; 
    else {
        cout << "Higest number: " << max << endl;
        cout << "Lowest number: " << min << endl;
    }
    
    return 0;
}