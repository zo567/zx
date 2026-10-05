#include "Wolf.h"
Wolf::Wolf() : Animal(), attackPower(20) {}
Wolf::Wolf(std::string n, int a, int h, int ap) : Animal(n, a, h), attackPower(ap) {}
void Wolf::showStatus() const 
{
    std::cout << " 狼 -> ";
    Animal::showStatus();
    std::cout << " 攻击力: " << attackPower << std::endl;
}
void Wolf::eatSheep(Sheep* target) 
{
    if (!isAlive) 
    {
        std::cout << name << " 已经死了，无法捕猎。" << std::endl;
        return;
    }
    if (!target->getIsAlive()) 
    {
        std::cout << name << " 试图吃 " << target->getName() << "，但它已经死了。" << std::endl;
        return;
    }
    std::cout << "\n--- 捕猎开始 ---" << std::endl;
    std::cout << name << " 正在攻击 " << target->getName() << "..." << std::endl;
    target->takeDamage(attackPower);
    if (!target->getIsAlive()) 
    {
        std::cout <<  target->getName() << " 被咬死了！" << std::endl;
        int newHealth = getHealth() + 20;
        setHealth(newHealth);
        std::cout  << name << " 饱餐一顿，健康值恢复到 " << getHealth() << "。" << std::endl;
    }
    else 
    {
        std::cout <<  target->getName() << " 挣脱了，还活着。" << std::endl;
    }
    std::cout << "--- 捕猎结束 ---\n" << std::endl;
}