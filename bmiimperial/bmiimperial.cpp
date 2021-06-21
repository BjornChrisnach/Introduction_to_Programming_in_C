#include <iostream>
using namespace std;

int main() {
    float bmi, bodyWeight, bodyHeight;

    cout<<"Please enter weight in pounds:"<<endl;
    cin>>bodyWeight;
    cout<<"Please enter height in inches:"<<endl;
    cin>>bodyHeight;

    bodyWeight = bodyWeight * 0.453592;
    bodyHeight = bodyHeight * 0.0254;

    bmi = bodyWeight/(bodyHeight * bodyHeight);
    float value = (int)(bmi * 100 + .5);
    bmi = (float)value / 100;

    cout<<"BMI is: "<<bmi<<endl;

    return 0;
}