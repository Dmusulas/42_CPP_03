/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 20:35:28 by dmusulas          #+#    #+#             */
/*   Updated: 2025/07/04 20:35:29 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    // Constructor
    ScavTrap(const std::string &name);

    // Copy constructor
    ScavTrap(const ScavTrap &other);

    // Assignment operator
    ScavTrap &operator=(const ScavTrap &other);

    // Destructor
    ~ScavTrap();

    // Override attack function
    void attack(const std::string &target);

    // Special ability
    void guardGate();
};

#endif
