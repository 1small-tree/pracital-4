#include "Person.h"

int main()

{

Person m1,m2,m3,m4;

cout <<"before setting name: " << m1.getName() <<endl;

m1.setName("test");

cout <<"after setting name: " << m1.getName() <<endl;

cout <<"before setting age: " << m1.getAge() <<endl;

m1.setAge(23);

cout <<"after setting age: " << m1.getAge() <<endl;

//before setting there may be a garbage value in it...

cout << "before setting m2 " << m2.getName() <<" " << m2.getAge() << endl;

m2.setName("test2");

m2.setAge(22);

cout << "after setting m2 " << m2.getName() <<" " << m2.getAge() << endl;

cout << "before setting m3 " << m3.getName() <<" " << m3.getAge() << endl;

m3.setName("test3");

m3.setAge(21);

cout << "after setting m3 " << m3.getName() <<" " << m3.getAge() << endl;

cout << "before setting m4 " << m4.getName() <<" " << m4.getAge() << endl;

m4.setName("test4");

m4.setAge(32);

cout << "after setting m4 " << m4.getName() <<" " << m4.getAge() << endl;

return 1;

}