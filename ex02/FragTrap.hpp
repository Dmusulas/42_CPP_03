/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 20:43:30 by dmusulas          #+#    #+#             */
/*   Updated: 2025/07/04 20:45:27 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    // Constructor
    FragTrap(const std::string &name);

    // Copy constructor
    FragTrap(const FragTrap &other);

    // Assignment operator
    FragTrap &operator=(const FragTrap &other);

    // Destructor
    ~FragTrap();

    // Override attack function
    void attack(const std::string &target);

    // Special ability
    void highFivesGuys(void);
};

#endif
