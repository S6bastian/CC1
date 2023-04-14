#include <iostream>
#include <string>
using namespace std;

class Animal{
private:
    int age;
    string color;
public:
    Animal(int age, string color){
        this->age=age;
        this->color=color;
    }
    int getAge(){
        return age;
    }
    string getColor(){
        return color;
    }

};
class Dog : public Animal{
private:
    string raze;
public:
    Dog(int age, string color, string raze)
        :{}
};