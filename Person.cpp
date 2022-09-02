#include "Person.h"

Person::Person()

{

this->myName = "?";

this->salary = 0;

}

string Person::getName(){ return this->myName; }

void Person::setName(string name){ this->myName = name; }

int Person::getSalary(){ return this->salary; }

void Person::setSalary(int salary){ this->salary = salary; }

string Person::toString()

{

stringstream ss;

ss << "Name: " << getName() << ", Salary: $" << getSalary();

return ss.str();

}