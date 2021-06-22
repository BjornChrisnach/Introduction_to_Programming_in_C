#include <iostream>
using namespace std;

int main() {
    int totalNumAsked, resultValue, intValue0, intValue1, intValue2;

    cout<<"Please enter a positive integer greater than 1:"<<endl;
    cin>>totalNumAsked;

    for(int counter = 0; counter < totalNumAsked; counter++) {
        if(counter == 0) {
            intValue0 = 0;
            intValue1 = 1;
            intValue2 = 0;
            resultValue = intValue0 + intValue1;
        }
        else {
           intValue1 = intValue2;
           intValue2 = resultValue;
           resultValue = intValue1 + intValue2; 
        }
        cout<<resultValue<<endl;
    }

    return 0;
}