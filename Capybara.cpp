#include "Capybara.h"

Capybara::Capybara()

{

this->name = "?";

this->age = 0;

}

string Capybara::getName(){ return this->name; }

void Capybara::setName(string name){ this->name = name; }

int Capybara::getAge(){ return this->age; }

void Capybara::setAge(int age){ this->age = age; }

string Capybara::toString()

{

stringstream ss;

ss << "Name: " << getName() << ", Age: " << getAge();

return ss.str();

}