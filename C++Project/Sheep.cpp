#include "Sheep.h"
Sheep::Sheep() : Animal() {}
Sheep::Sheep(std::string n, int a, int h) : Animal(n, a, h) {}
void Sheep::takeDamage(int damage) 
{
    if (!isAlive) return;
    std::cout << name << " 受到了 " << damage << " 点伤害！" << std::endl;
    setHealth(health - damage); 
}
void Sheep::showStatus() const 
{
    std::cout << " 羊 -> ";
    Animal::showStatus();
}