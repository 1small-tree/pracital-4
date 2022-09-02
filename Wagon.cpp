#include "Wagon.h"

Capybara::Capybara()
{
    // intialising the data members with the default name and age
    this->name = "cp0";
    this->age = 14;
}

// parameteried constructor
Capybara::Capybara(string name, int age)
{
    // intialising the data members with the passed name and age
    this->name = name;
    this->age = age;
}

// function to get the name of the capybara
string Capybara::getName()
{
    // returning the name of the cabybara
    return this->name;
}

// fucntion to get the age of the capybara
int Capybara::getAge()
{
    // returning the age of the capybara
    return this->age;
}

// a class to represent wagon
class Wagon
{
private:
    // array to store four capybara type object
    Capybara cb[4];

    // to store the count of capybara
    int count;

public:
    Wagon(); // create an empty wagon object

    // member functions
    bool isEmpty();                     // to check if wagon is empty or not
    bool addCapybara(Capybara newCapy); // adds a Capybara to the wagon, returns false if full
    void emptyWagon();                  // remove all Capybaras from the wagon
    void printCapybaras();              // print the name, a space, the age, then a new line for each capybara in the order they were added
};

// default constructor
Wagon::Wagon()
{
    this->count = 0;
}

// function to check if the wagon is empty or not
bool Wagon::isEmpty()
{
    return (count == 0);
}

// function to add a capybara to the wagon
bool Wagon::addCapybara(Capybara newCapy)
{
    // if the wagon is not full add the capybara to the wagon
    if (this->count < 4)
    {
        // adding the capybara to the wagon
        this->cb[this->count] = newCapy;

        // incrementing the count
        count++;

        // returning true
        return true;
    }
    else
    {
        // if the wagon if false returning false
        return false;
    }
}

// function to empty the wagon
void Wagon::emptyWagon()
{
    this->count = 0;
}

// function to print all the capybara in the wagon
void Wagon::printCapybaras()
{
    // printing the name and age of the all capybaras
    cout << "Capybaras in the Wagon are: " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << this->cb[i].getName() << " " << this->cb[i].getAge() << endl;
    }
}
    