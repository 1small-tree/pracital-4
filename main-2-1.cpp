#include <iostream>
#include <vector>
using namespace std;


vector<Capybara> capybaras(5);
bool success;


int main(void)
{
    Wagon wagon;
    capybaras[0].setName("David");
    capybaras[1].setName("Ross");
    capybaras[2].setName("Elon");
    capybaras[3].setName("Wide Vlad");
    capybaras[4].setName("Bill");

    for (Capybara &a : capybaras)
    {
        a.setAge(rand() % 50 + 1);
    }
    

    cout << "\n" << "Capybara information" << endl;
    for (Capybara &a : capybaras)
    {
        cout << "'" << a.getName() << "' is " << a.getAge() << " years old" << endl;
    }

    cout << "\n" << "Adding the capybaras" << endl;
    for (Capybara &a : capybaras)
    {
        cout << "Adding capybara: ";
        success = wagon.addCapybara(a);
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
    wagon.printCapybaras();

    return 0;
}