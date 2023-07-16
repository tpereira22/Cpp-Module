#include "Character.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
    IMateriaSource  *src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    AMateria    *tmp;
    tmp = src->createMateria("ice");

    Character  *ze = new Character("Ze");
    ze->equip(tmp);
    tmp = src->createMateria("cure");
    ze->equip(tmp);
    //Character  ze2(*ze);
    Character  *ze2 = new Character(*ze);
    std::cout << "name: " << ze2->getName() << std::endl;
    ze2->use(0, *ze);
    ze2->use(1, *ze);
    ze2->use(2, *ze);
    ze2->use(3, *ze);
    
    std::cout << std::endl;
    delete ze;
    std::cout << std::endl;

    Character   ze3;

    ze2->use(0, ze3);
    ze2->use(1, ze3);
    ze2->use(2, ze3);
    ze2->use(3, ze3);
    std::cout << std::endl;

    delete ze2;
    delete src;


    // IMateriaSource  *src = new MateriaSource();

    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());

    // std::cout << std::endl;

    // AMateria    *tmp;
    // AMateria    *tmp2;
    // tmp = src->createMateria("ice");
    // tmp2 = src->createMateria("cure");
    // AMateria    *tmp3;
    // AMateria    *tmp4;

    // tmp3 = tmp->clone();

    // std::cout << std::endl;

    // ICharacter  *ze = new Character("Ze");
    // ICharacter  *manel = new Character("Manel");

    // std::cout << std::endl;
    // ze->equip(tmp);
    // manel->equip(tmp2);
    // manel->equip(tmp3);
    // tmp3 = src->createMateria("ice");
    // manel->equip(tmp3);
    // tmp3 = src->createMateria("cure");
    // manel->equip(tmp3);
    // tmp4 = tmp3;
    // tmp3 = src->createMateria("ice");
    // manel->equip(tmp3);

    // std::cout << std::endl;
    // delete src;
    // delete tmp3;

    // std::cout << std::endl;
    // ze->use(0, *manel);
    // manel->use(0, *ze);
    // manel->use(1, *ze);
    // manel->use(2, *ze);
    // manel->use(5, *ze);
    // manel->use(-1, *ze);
    // std::cout << std::endl;

    // manel->unequip(3);
    // manel->use(3, *ze);
    // manel->unequip(3);
    // manel->unequip(5);
    // manel->equip(tmp4);
    // manel->use(3, *ze);


    // std::cout << std::endl;
    // delete ze;
    // delete manel;


    // IMateriaSource  *src = new MateriaSource();

    // std::cout << std::endl;
    // src->learnMateria(new Ice());
    // src->printMaterias();

    // std::cout << std::endl;
    // src->learnMateria(new Cure());
    // src->printMaterias();

    // std::cout << std::endl;
    // src->learnMateria(new Ice());
    // src->printMaterias();

    // std::cout << std::endl;
    // src->learnMateria(new Cure());
    // src->printMaterias();

    // std::cout << std::endl;
    // src->learnMateria(new Cure());
    // src->printMaterias();


    // std::cout << std::endl;
    // delete src;

    // IMateriaSource  *src = new MateriaSource();
    // AMateria        *newMateria = new Ice();
    // Ice ice;

    // std::cout << std::endl;
    // std::cout << newMateria->getType() << std::endl;
    // std::cout << std::endl;
    
    // delete src;
    // delete newMateria;


    //Character   ze("Ze");
}
