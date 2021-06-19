#include <iostream>
using namespace std;

int main() {
    float bmi, bodyWeight, bodyHeight;

    cout<<"Please enter weight in kilogram:"<<endl;
    cin>>bodyWeight;
    cout<<"Please enter height in meters:"<<endl;
    cin>>bodyHeight;

    bmi = bodyWeight/(bodyHeight * bodyHeight);
    float value = (int)(bmi * 100 + .5);
    bmi = (float)value / 100;

    cout<<"BMI is: "<<bmi<<endl;

    return 0;
}