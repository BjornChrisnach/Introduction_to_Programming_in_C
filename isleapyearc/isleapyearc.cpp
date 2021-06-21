#include <iostream>
#include <string>
#include <sstream>
using namespace std;   

int main(int argc, char* argv[]) {
    string strArgument1;
    int argument1;
    string output;
    stringstream convertSs;

    strArgument1 = argv[1];
    convertSs << strArgument1;
    convertSs >> argument1;
    // output = convertSs.str(); and output += " was a or was not a leap year"

    if(argument1 % 4 == 0) {
        if(argument1 % 100 != 0) {
            output = strArgument1 + " was a leap year";
        }
        else if(argument1 % 100 == 0 && argument1 % 400 == 0) {
            output = strArgument1 + " was a leap year";
        }
        else {
            output = strArgument1 + " was not a leap year";
        }
    }
    else {
        output = strArgument1 + " was not a leap year";
    }

    cout<<output<<endl;

    return 0;
}