/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ParseUtils.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:06:05 by timartin          #+#    #+#             */
/*   Updated: 2023/10/06 15:06:11 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_UTILS_HPP
# define PARSE_UTILS_HPP

# include <iostream>

void    removeAllSpaces(std::string& str);
void    removeSpaces(std::string& str);
int checkAfterFirstWord(std::string& str);
std::string checkIfPseudo(std::string& str);
std::string numberParse(std::string& str);
std::string charParse(std::string& str);
std::string checkIfInt(std::string& str);
std::string parseDecimal(std::string& str);
std::string checkFloat(std::string& str);
void    printPseudo(std::string& str, std::string type);


#endif
