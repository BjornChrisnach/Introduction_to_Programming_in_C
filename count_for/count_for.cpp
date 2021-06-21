#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout<<"Please enter the number to count up to:"<<endl;
    cin>>n;

    for(int counter = 1; counter <= n; counter++) {
        cout<<counter<<endl;
    }

    return 0;
}