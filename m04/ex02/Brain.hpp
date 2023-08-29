/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:00:24 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 15:00:26 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _brain_H
# define _brain_H

# include <iostream>

class Brain
{
private:
    std::string _ideas[100];
public:
    Brain(void);
    Brain(Brain const &copy);
    ~Brain(void);

    Brain   &operator=(Brain const &rhs);
    std::string *getIdeas(void);
};

#endif
