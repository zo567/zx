#include "Animal.h"
Animal::Animal() : name("Î´Öª"), age(0), health(100), isAlive(true) {}
Animal::Animal(std::string n, int a, int h) : name(n), age(a) 
{
    if (h > 100) h = 100;
    if (h < 0) h = 0;
    health = h;
    isAlive = (health > 0);
}
void Animal::setHealth(int h) 
{
    if (h > 100) h = 100;
    if (h <= 0) 
    {
        health = 0;
        isAlive = false;
    }
    else {
        health = h;
        isAlive = true;
    }
}
void Animal::showStatus() const 
{
    std::cout << "¡¾" << name << "¡¿ ÄêÁä:" << age
        << " ½¡¿µÖµ:" << health
        << " ×´Ì¬:" << (isAlive ? "´æ»î" : "ËÀÍö") << std::endl;
}