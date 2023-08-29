/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:48:55 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 14:48:57 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
private:
public:
    Dog(void);
    Dog(Dog const &copy);
    ~Dog(void);

    Dog &operator=(Dog const &rhs);

    void        makeSound(void) const;
    std::string getType(void) const;
};

#endif
