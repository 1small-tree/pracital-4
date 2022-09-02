#include <iostream>
#include <vector>
#include <stdlib.h>
#include "Person.h"
using namespace std;

vector<Person> stuff;


int main(void)
{
    Person person1(10000, "Person 1");
    Person person2(20000, "Person 2");
    Person person3(30000, "Person 3");
    Person person4(40000, "Person 4");

    stuff.push_back(person1);
    stuff.push_back(person2);
    stuff.push_back(person3);
    stuff.push_back(person4);

    for (Person &a : stuff)
    {
        cout << "'" << a.getName() << "' has " << a.getSalary() << " as a salary" << endl;
    }


    stuff[0].setName("Peter");
    stuff[1].setName("Jack");
    stuff[2].setName("Seven");
    stuff[3].setName("Ariel");

    for (Person &a : stuff)
    {
        a.setSalary(a.getSalary() + rand() % 10000 - 5000 + 1);
    }

    for (Person &a : stuff)
    {
        cout << "'" << a.getName() << "' has " << a.getSalary() << " as a salary" << endl;
    }

    return 0;
}