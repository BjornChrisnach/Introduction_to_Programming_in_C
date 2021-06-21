#include <iostream>
using namespace std;

int main() {
    int studentCount, sumGrades, currGrade;
    double average;

    cout<<"Please enter the number of students in the class:"<<endl;
    cin>>studentCount;

    cout<<"please enter the students grades (seperated by a space):"<<endl;
    
    sumGrades = 0;
    for(int count = 1; count <= studentCount; count++) {
        cin>>currGrade;
        sumGrades += currGrade;
    }

    average = (double)sumGrades / (double)studentCount;

    cout<<"The average is "<<average<<endl;

    return 0;
}