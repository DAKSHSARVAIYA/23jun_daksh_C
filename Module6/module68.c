#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person
{
  private:
  string name;
  int age;
  public:
  Person(string n, int a);
  string get_name()const;
  int get_age()const;
  void increment_age();
  void print()const;
};

Person::Person(string n, int a)
{ 
  name = n;
  age = a;
}

string Person::get_name() const
{
  return name;
}

void Person::increment_age()
{
  age += 1;
}

void Person::print() const
{
  cout << name << endl;
  cout << age << endl;
}


class Car
{
 private:
  string model;
  Person *owner;
  Person *driver;

 public:
  Car(string m);
  void set_driver(Person* p);
  void set_owner(Person* p);
  void print()const;
}; 


Car::Car(string m)
{
  model = m;
}

void Car::set_driver(Person* p)
{
  driver = p;
}

void Car::set_owner(Person* p)
{
  owner = p;
}

void Car::print() const
{
  cout << model << endl;
  cout << driver->get_name() << endl;
  cout << owner->get_name() << endl;
}



int main()
{ 
  vector<Person*> people;

  const int PERSON_SZ = 4;
  char * names[] = {"Jim", "Fred", "Harry", "Linda"};
  int ages[] = { 23, 35, 52, 59 };

  for (int i = 0; i < PERSON_SZ; i++)
  {
    Person *a = new Person(names[i], ages[i]);
    people.push_back(a);
  }

  vector<Car*> cars;
  const int CAR_SZ = 3;
  char * models[] = { "Festiva", "Ferrarri", "Prius" };

  for (int i = 0; i < CAR_SZ; i++)
  {
    Car *c = new Car(models[i]);
    c->set_driver(people[rand()% (people.size())]);
    c->set_owner(people[rand()% (people.size())]);
    cars.push_back(c);
  }

  return 0;
}
