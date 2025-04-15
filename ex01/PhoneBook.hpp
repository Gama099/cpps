/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hadd <sel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:18:36 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/15 18:18:36 by sel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOH_HPP
#define PHONEBOOH_HPP

#define CONTACT_NUM 8

#include <cstdlib>
#include <cctype>   // For isdigit
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[CONTACT_NUM];
	std::string	column( std::string name );
public:
	void	addContact(int index);
	void	displayContact(int index);
};

#endif
