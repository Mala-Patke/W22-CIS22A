#include<iostream>
using namespace std;

int main() {
    int num1;
    int num2;

    cout << "First integer: ";
    cin >> num1;
    cout << "Second integer: ";
    cin >> num2;

    if(num1 <= num2) {
        int sum = 0;
        for(int i = num1; i <= num2; i+=2){
            if(i % 2 != 0) i++;
            sum += i;
        }
        cout << "Sum: " << sum << endl;
    } else cout << "The first integer must be smaller than the second integer. Please run the program again";

    return 0;
}