/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:47:51 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 14:47:52 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat(void);
    Cat(Cat const &copy);
    ~Cat(void);

    Cat &operator=(Cat const &rhs);

    void        makeSound(void) const;
    std::string getType(void) const;
};

#endif
