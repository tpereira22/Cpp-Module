/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:01:05 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 15:01:06 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
private:
    Brain   *_brain;
public:
    Dog(void);
    Dog(Dog const &copy);
    virtual ~Dog(void);

    Dog &operator=(Dog const &rhs);

    void        makeSound(void) const;
    std::string getType(void) const;
    Brain       *getBrain(void) const;
    void        printIdea(void) const;
};

#endif
