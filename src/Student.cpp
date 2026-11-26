#include "Student.h"
#include<iostream>
using namespace std;

Student::Student (string n, int h,float a){
    name=n;
    studyHours=h;
    attendance=a;

}
void Student::displayInfo(){
    cout<<"Name is : "<<name<<endl;
    cout<<"studyHours :" <<studyHours<<endl;
    cout<<"attendence :"<<attendance<<endl;
}