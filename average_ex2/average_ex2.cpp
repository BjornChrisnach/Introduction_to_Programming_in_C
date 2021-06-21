#include <iostream>
using namespace std;

int main() {
    bool seenEndOfInput;
    int gradeValue, studentCount, sumGrades;
    double average;

    cout<<"please enter the students grades (seperated by a space):"<<endl;
    cout<<"End the sequence by typing -1:"<<endl;

    seenEndOfInput = false;
    studentCount = 0;
    sumGrades = 0;
    while(seenEndOfInput == false) {
        cin>>gradeValue;
        if(gradeValue == -1) {
            seenEndOfInput = true;
        }
        else {
            studentCount ++;
            sumGrades += gradeValue;
        }
    }

    average = (double)sumGrades / (double)studentCount;

    cout<<"The average is "<<average<<endl;

    return 0;
}