#pragma once
#include <string>
#include <iostream>
class Animal 
{
protected:
    std::string name;
    int age;
    int health;  
    bool isAlive;  
public:
    Animal();
    Animal(std::string n, int a, int h);
    virtual ~Animal() {}
    std::string getName() const { return name; }
    int getHealth() const { return health; }
    bool getIsAlive() const { return isAlive; }
    void setHealth(int h);
    virtual void showStatus() const;
};