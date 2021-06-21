#include <iostream>
using namespace std;

int main() {
    int userInput, absValue;

    cout<<"Please enter an number:"<<endl;
    cin>>userInput;


    if(userInput < 0)
        // userInput *= (-1);
        // absValue = userInput * (-1);
        absValue = abs (userInput);

    cout<<"|"<<userInput<<"| = "<<absValue<<endl;

    return 0;
}