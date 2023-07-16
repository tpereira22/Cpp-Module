#include "Character.hpp"

Character::Character(void) : _name(""), _inventory{ nullptr }
{
    std::cout << "Char default constr" << std::endl;
}

Character::Character(std::string name) : _name(name), _inventory{ nullptr }
{
    std::cout << "Char string constr" << std::endl;
}

Character::Character(Character const &copy) : _name(copy._name), _inventory{ nullptr }
{
    std::cout << "Char copy constr" << std::endl;
    *this = copy;
}

Character::~Character(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] != nullptr)
            delete this->_inventory[i];
    }
    std::cout << "Char destr" << std::endl;
}

Character   &Character::operator=(Character const &copy)
{
    this->_name = copy._name;
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] != nullptr)
            delete this->_inventory[i];
        if (copy._inventory[i] != nullptr)
            this->_inventory[i] = copy._inventory[i]->clone();
        else
            this->_inventory[i] = nullptr;
    }
    return *this;
}

std::string const   &Character::getName() const
{
    return this->_name;
}

void                Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == nullptr)
        {
            this->_inventory[i] = m;
            std::cout << "Materia " << m->getType();
            std::cout << " was successfully equiped in slot " << i << std::endl;
            return ;
        }    
    }
    std::cout << "Inventory is full! Equip fail!" << std::endl;
}

void                Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        std::cout << "Slot " << idx << " doesn't exist!" << std::endl;
    else
    {
        if (this->_inventory[idx] != nullptr)
        {
            std::cout << "Materia " << this->_inventory[idx]->getType(); 
            std::cout << " successfully unequiped in slot " << idx << std::endl;
            this->_inventory[idx] = nullptr;
        }
        else
            std::cout << "Slot was already empty!" << std::endl;
    }
}

void                Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << "Slot " << idx << " doesn't exist! Can't Attack ";
        std::cout << target.getName() << std::endl;
    }
    else if (this->_inventory[idx] == nullptr)
    {
        std::cout << "Slot " << idx << " has no materia. Can't Attack ";
        std::cout << target.getName() << std::endl;
    }
    else
        this->_inventory[idx]->use(target);
}