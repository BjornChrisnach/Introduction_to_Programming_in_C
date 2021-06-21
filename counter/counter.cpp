#include <iostream>
using namespace std;

int main() {
    int quarters, dimes, nickels, pennies, cents, dollars;

    cout<<"Please enter the number of coins:"<<endl;
    cout<<"# of quarters"<<endl;
    cin>>quarters;
    cout<<"# of dimes"<<endl;
    cin>>dimes;
    cout<<"# of nickels"<<endl;
    cin>>nickels;
    cout<<"# of pennies"<<endl;
    cin>>pennies;

    cents = ((quarters * 25) + (dimes * 10) + (nickels * 5) + (pennies * 1));
    dollars = cents / 100;
    cents = cents % 100;

    cout<<"The total is "<<dollars<<" dollars and "<<cents<<" cents"<<endl;

    return 0;
}