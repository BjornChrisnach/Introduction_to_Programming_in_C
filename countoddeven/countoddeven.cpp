#include <iostream>
using namespace std;

int main () {
    int value1, value2, value3, value4;
    int countOdd, countEven;

    cout<<"Please enter four positive integers, seperated by a space:"<<endl;
    cin>>value1>>value2>>value3>>value4;

    countOdd = 0;
    countEven = 0;

    if(value1 % 2 == 0) {
        countEven += 1;
    }
    else {
        countOdd += 1;
    }
    
    if(value2 % 2 == 0) {
        countEven += 1;
    }
    else {
        countOdd += 1;
    }
    
    if(value3 % 2 == 0) {
        countEven += 1;
    }
    else {
        countOdd += 1;
    }
    
    if(value4 % 2 == 0) {
        countEven += 1;
    }
    else {
        countOdd += 1;
    }

    if(countEven > 2) {
        cout<<"more evens"<<endl;
    }
    else if(countOdd > 2) {
        cout<<"more odds"<<endl;
    }
    else if(countEven == 2 && countOdd == 2) {
        cout<<"same number of evens and odds"<<endl;
    }

    return 0;
}