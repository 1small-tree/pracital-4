#include <iostream>
#include <vector>
#include "Person.h"
#include "Airplane.h"
using namespace std;

vector<Person> people;

int main(void)
{

    Person person1(10000, "Peter");
    Person person2(20000, "Jack");
    Person person3(30000, "Seven");
    people.push_back(person1);
    people.push_back(person2);
    people.push_back(person3);
    
    cout << "\nThe people's information" << endl;
    for (Person &a : people)
    {
        cout << "'" << a.getName() << "' has " << a.getSalary() << " as a salary" << endl;
    }


    Airplane airplane("HAPPY DAYS", people[0], people[1]);
    cout << "\nAirplane information" << endl;
    airplane.printDetails();


    cout << "\nChanging the pilot" << endl;
    airplane.setPilot(people[2]);
    cout << "Airplane information" << endl;
    airplane.printDetails();

    cout << "\nChanging the copilot" << endl;
    airplane.setPilot(people[0]);
    cout << "Airplane information" << endl;
    airplane.printDetails();

    return 0;
}