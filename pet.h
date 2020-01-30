/*
Jason Song
CPSC 298 interterm
Assignment 3
*/

#include <iostream>
#include <string>

using namespace std;

//This class consists of the attributes of object, pet
class Pet{
  public:
    Pet();//default constructor
    Pet(string name, int age, string type, double weight);//overloaded constructor

    //accessors AKA getters
    string getName();
    int getAge();
    string getType();
    double getWeight();

    //mutators AKA setters
    void setName(string name);
    void setAge (int age);
    void setType(string type);
    void setWeight(double weight);

    //member variables
  private:
    string m_name;
    unsigned int m_age;
    string m_type;
    double m_weight ;

};
