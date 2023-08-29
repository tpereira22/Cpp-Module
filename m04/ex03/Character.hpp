/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:02:27 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 15:02:28 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    std::string _name;
    AMateria    *_inventory[4];
public:
    Character(void);
    Character(std::string name);
    Character(Character const &copy);
    ~Character(void);

    Character   &operator=(Character const &copy);

    std::string const   &getName() const;
    void                equip(AMateria* m);
    void                unequip(int idx);
    void                use(int idx, ICharacter &target);
    
};

#endif
