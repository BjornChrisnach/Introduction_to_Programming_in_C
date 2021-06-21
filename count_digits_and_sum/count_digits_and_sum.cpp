#include <iostream>
using namespace std;

int main() {
    int num, sumDigits,countDigits, currDigit;

    cout<<"Please enter a positive number:"<<endl;
    cin>>num;

    sumDigits = 0;
    countDigits = 0;
    while(num > 0){
        currDigit = num % 10;
        sumDigits += currDigit;
        countDigits ++;
        num = num / 10 ;
    }
    // for(countDigits = 0; num > 0; countDigits++) {
    //     sumDigits += num % 10;
    //     num = num / 10 ;
    // }

    cout<<"The number has "<<countDigits<<" digits and the sum is "<<sumDigits<<endl;

    return 0;
}