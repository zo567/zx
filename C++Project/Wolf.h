#pragma once
#include "Animal.h"
#include "Sheep.h" 
class Wolf : public Animal 
{
private:
    int attackPower;
public:
    Wolf();
    Wolf(std::string n, int a, int h, int ap);
    void eatSheep(Sheep* target);
    void showStatus() const override;
};
