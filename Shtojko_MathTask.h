#ifndef _SHTOJKO_MATHTASK_H_
#define _SHTOJKO_MATHTASK_H_

#include <string>
using namespace std;

bool UserInput(string input) {
    if (input.empty()) return false;
    try {
        int number = stoi(input);
    }
    catch(...) {
        return false;
    }
    return true;
}

void EnterDigit(int& varlink, const string& label) {
    string raw_input;
    cout<<label<<" = ";
    getline(cin, raw_input);
    while(!UserInput(raw_input)) {
        cout<<label<<" = ";
        getline(cin, raw_input);
    }
    varlink = stoi(raw_input);
}

int CalculateResult(int numberA, numberB, operation){
    return numberA  numberB
}