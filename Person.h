#include "Capybara.h"

#include <sstream>

using namespace std;

class Person{   
    
private:

string myName;

int salary;

public:

Person(int mySalary, string myName); // a name and salary must be provided to create a Person

void setName(string myName);         // change the Person's name

string getName();

void setSalary(int mySalary);        // change the Person's salary

int getSalary();

};

