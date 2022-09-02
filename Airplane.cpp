#include <iostream> 

using namespace std; 

class Person {

private:

string firstName,lastName; public: Person()//default constructor

{

firstName = lastName = 

}

Person(string firstName,string lastName)//argument constructor

this->firstName = firstName; this->lastName = lastName;

}

person(person &p)//copy constructor

{

firstName = p.firstName;

lastName = p.lastName; }

//set and get methods

void setFirstName(string firstName)

} this->firstName = firstName;

 string getFirstName()

{ return firstName;

} void setLastName(string lastName)

{ this->lastName = lastName;

} string getLastName()

return lastName;

} //operator overloading function for = void operator =(person p)

{

this->firstName = p.firstName;

this->lastName = p.lastName;

};