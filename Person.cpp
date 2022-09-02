#include "Person.h"

Person::Person(string myName,int Salary){
    this->name = myName;
    this->salary = Salary;
}
 
void Person::setName(string myName){
    this->name = myName;
}

string Person::getName(){
    return this->name;
}

void Person::getSalary(){
    this->salary = mySalary;
}

int Person::getSalary(){
    return this->salary;
}

Person::Person() = default;