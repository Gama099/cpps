/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hadd <sel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 22:23:14 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/17 22:23:16 by sel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
private:
    std::string name;

public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce();
    void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
