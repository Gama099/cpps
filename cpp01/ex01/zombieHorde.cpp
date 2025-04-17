/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hadd <sel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 22:27:10 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/17 22:27:12 by sel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombies = new Zombie[N];
	for (int i = 0; i < N; i++){
		zombies[i].setName(name);
	}
	return zombies;
}
