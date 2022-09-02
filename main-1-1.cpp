#include "Person.h"

int main()

{

Capybara m1, m2, m3, m4;

m1.setName("Jode");

m1.setAge(23);

m2.setName("Alan");

m2.setAge(34);

m3.setName("Alice");

m3.setAge(19);

m4.setName("Capy");

m4.setAge(29);

Person p1("Harry", 4399);

Person p2("Naomi", 2300);

Person p3("Paolo", 1900);

Person p4("Garry", 5300);

cout << endl << "*** DETAILS OF ALL MEERKATS ***\n-------------------------------" << endl;

cout << m1.toString() << endl;

cout << m2.toString() << endl;

cout << m3.toString() << endl;

cout << m4.toString() << endl;

cout << endl << "*** DETAILS OF ALL PERSONS ***\n------------------------------" << endl;

cout << p1.toString() << endl;

cout << p2.toString() << endl;

cout << p3.toString() << endl;

cout << p4.toString() << endl << endl;

cout << "Attempting to change details of Person p3 and p4 by using the setter methods..." << endl;

p3.setName("Robert");

p3.setSalary(5000);

p4.setName("Hanna");

p4.setSalary(3900);

cout << p3.toString() << endl;

cout << p4.toString() << endl << endl;

return 0;

}