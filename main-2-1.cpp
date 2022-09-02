#include <iostream>
#include <vector>
#include <stdlib.h>
#include "Person.h"
using namespace std;

vector<Capybara> Wagon;


int main(void)
{
    Capybaras[0].setName("David");
    Capybaras[1].setName("Ross");
    Capybaras[2].setName("Elon");
    Capybaras[3].setName("Wide Vlad");
    Capybaras[4].setName("Bill");

    for (Capybara &a : Capybaras)
    {
        a.setAge(rand() % 50 + 1);
    }
    

    cout << "\n" << "Capybara information" << endl;
    for (Capybara &a : Capybaras)
    {
        cout << "'" << a.getName() << "' is " << a.getAge() << " years old" << endl;
    }

    cout << "\n" << "Adding the capybaras" << endl;
    for (Capybara &a : Capybaras)
    {
        cout << "Adding Capybara: ";
        success = Wagon.addCapybara(a);
        if (success)
        {
            cout << "Success";
        }
        else
        {
            cout << "Wagon full";
        }
        cout << endl;
    }

    cout << "\nWagon users" << endl;
    Wagon.printCapybaras();

    return 0;
}