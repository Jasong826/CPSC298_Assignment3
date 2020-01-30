/*
Jason Song
CPSC 298 interterm
Assignment 3
*/

#include "pet.h"

//this main function creates two instances of the object, pet and outputs their information
int main()  {
  //making two instances of pets
  Pet *pet1 = new Pet("Mr. Waffles", 10, "Dog", 18.6);
  Pet *pet2 = new Pet("Garfield", 41, "Tabby Cat", 56.9);

  //using the mutator functions to change the name and age of pets
  pet1->setType("Beagle");
  pet2->setAge(40);

  //just to organize the console output
  cout << endl;
  cout << "--------------------------------------------------------------------------------------------" << endl;

  //outputting the information of the first instance
  cout << "The first pet's name is: " << pet1->getName()<< endl;
  cout << "His age is: " << pet1->getAge() << endl;
  cout << "He is a: " << pet1->getType() << endl;
  cout << "He weighs at: " << pet1->getWeight() << " pounds" << endl;

  cout << "--------------------------------------------------------------------------------------------" << endl;

  //outputting the information of the second instance
  cout << "The second pet's name is: " << pet2->getName()<< endl;
  cout << "His age is: " << pet2->getAge() << endl;
  cout << "He is a: " << pet2->getType() << endl;
  cout << "He weighs at: " << pet2->getWeight() << " pounds" << endl;

  cout << "--------------------------------------------------------------------------------------------" << endl;
  cout << endl;

  return 0;
}
