/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:41:47 by timartin          #+#    #+#             */
/*   Updated: 2023/07/11 19:41:53 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl    harl;

    harl.complain("DEBUG");
    
    harl.complain("INFO");
    
    harl.complain("OLA");

    harl.complain("WARNING");
    
    harl.complain("ERROR");
}
