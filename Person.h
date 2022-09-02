#include <iostream>

#include <sstream>

using namespace std;

class Person

{

private:

string myName;

int salary;

public:

Person();

string getName();

void setName(string);

int getSalary();

void setSalary(int);

string toString();

};