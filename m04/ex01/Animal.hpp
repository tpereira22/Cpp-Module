/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:57:32 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 14:57:36 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal(void);
    Animal(Animal const &copy);
    virtual ~Animal(void);

    Animal  &operator=(Animal const &rhs);
    virtual void    makeSound(void) const;
    std::string getType(void) const;
    virtual void printRandomIdea(void) const;
};

#endif
