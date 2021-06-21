#include <iostream>
using namespace std;

int main() {
    int counter, n;
    
    cout<<"Please enter the number to count up to:"<<endl;
    cin>>n;

    counter = 1;
    while(counter <= n) {
        cout<<counter<<endl;
        // counter += 1;
        counter ++;
    }

    return 0;
}