#pragma once
#include "Animal.h"
class Sheep : public Animal 
{
public:
    Sheep();
    Sheep(std::string n, int a, int h);
    void takeDamage(int damage);
    void showStatus() const override;
};