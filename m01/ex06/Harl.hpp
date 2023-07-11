/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:43:04 by timartin          #+#    #+#             */
/*   Updated: 2023/07/11 19:43:06 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream> 

class Harl
{
private:

    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);

public:

    Harl(void);
    ~Harl(void);

    void    complain(std::string level);
};

#endif
