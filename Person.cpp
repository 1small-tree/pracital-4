#include "Person.h"

Person::Person(string name, int salary)

{

this->myName = name;

this->salary = salary;

}

void Person::setName(string name){ this->myName = name; }

string Person::getName(){ return this->myName; }

void Person::setSalary(int salary){ this->salary = salary; }

int Person::getSalary(){ return this->salary; }

string Person::toString()

{

stringstream ss;

ss << "Name: " << getName() << ", Salary: $" << getSalary();

return ss.str();

}

