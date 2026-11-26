#ifndef student_h
#define student_h

#include<string>
using namespace std;
class Student{
    private:
    string name;
    int studyHours;
    float attendance;
    public:
    Student(string n , int h,float a);
    void displayInfo();
    
};
#endif