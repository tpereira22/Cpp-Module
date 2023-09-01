/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:59:55 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 14:59:57 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H

# include <iostream>

class AAnimal
{
protected:
    std::string type;
public:
    AAnimal(void);
    AAnimal(AAnimal const &copy);
    virtual ~AAnimal(void);

    AAnimal  &operator=(AAnimal const &rhs);
    virtual void    makeSound(void) const = 0;
    std::string getType(void) const;
    virtual void printIdea(void) const = 0;
};

#endif
