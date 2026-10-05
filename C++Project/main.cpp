#include <iostream>
#include "Wolf.h"
#include "Sheep.h"

using namespace std;

int main() 
{
    cout << "=== ÊµÑéÒ»ÓëÊµÑé¶þ×ÛºÏ²âÊÔ£ºÀÇ³ÔÑò ===" << endl;
    Sheep defaultSheep;
    cout << "²âÊÔÄ¬ÈÏ¹¹ÔìµÄÑò: ";
    defaultSheep.showStatus();
    Wolf* wolf = new Wolf("»ÒÌ«ÀÇ", 5, 80, 40);
    Sheep* sheep1 = new Sheep("Ï²ÑòÑò", 3, 100);
    Sheep* sheep2 = new Sheep("ÀÁÑòÑò", 2, 30);
    cout << "\n=== ³õÊ¼×´Ì¬ ===" << endl;
    wolf->showStatus();
    sheep1->showStatus();
    sheep2->showStatus();
    wolf->eatSheep(sheep2);
    wolf->eatSheep(sheep1);
    wolf->eatSheep(sheep1);
    cout << "=== ×îÖÕ×´Ì¬ ===" << endl;
    wolf->showStatus();
    sheep1->showStatus();
    sheep2->showStatus();
    delete wolf;
    delete sheep1;
    delete sheep2;
    return 0;
}