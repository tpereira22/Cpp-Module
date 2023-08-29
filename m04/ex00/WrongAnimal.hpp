/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:49:35 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 14:49:37 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

# include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal(void);
    WrongAnimal(WrongAnimal const &copy);
    ~WrongAnimal(void);

    WrongAnimal &operator=(WrongAnimal const &rhs);
    void        makeSound(void) const;
    std::string getType(void) const;
};

#endif
