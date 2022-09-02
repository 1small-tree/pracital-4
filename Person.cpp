#include <iostream>

using namespace std;

class Person

{

private:

string name;

int salary;

public:

// Parameterized Constructor

Person(string n, int s)

{

name = n;

salary = s;

}

string getName()

{

return name;

}

void setName(string myName){

name = myName;

}

int getSalary()

{

return salary;

}

void setSalary(int mySalary){

salary = mySalary;

}

};