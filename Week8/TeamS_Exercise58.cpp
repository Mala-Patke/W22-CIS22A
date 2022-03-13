#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream input;
    ofstream output;

    cout << "Opening input file" << endl;
    input.open("Input.txt");
    if(!input.is_open()){
        cout << "Error in opening input file" << endl;
        return 1;
    }

    cout << "Opening output file" << endl;
    output.open("Output.txt");
    if(!output.is_open()){
        cout << "Error in opening output file" << endl;
        return 1;
    }

    while(!input.eof()){
        int num;
        input >> num;
        if(num % 2 == 0) output << num << endl; 
    }

    cout << "Operations complete" << endl;
    cout << "Closing input file" << endl;
    input.close();
    cout << "Closing output file" << endl;
    output.close();

    cout << "Both files closed. Check ./Output.txt to check if it worked." << endl;

    return 0;
}