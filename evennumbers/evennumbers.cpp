#include <iostream>
using namespace std;

int main() {
    int num, evenValue;

    cout<<"Please enter a positive number, to show you the even numbers:"<<endl;
    cin>>num;

    evenValue = 0;
    for(int counter = 1; counter <= num; counter++) {
        evenValue = counter * 2;
        cout<<evenValue<<endl;
    }

    return 0;
}