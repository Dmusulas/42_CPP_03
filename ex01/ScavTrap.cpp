/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 20:24:13 by dmusulas          #+#    #+#             */
/*   Updated: 2025/07/04 21:16:41 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

// Constructor
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    this->hp = 100;
    this->ep = 50;
    this->attackDamage = 20;

    std::cout << "ScavTrap " << this->name << " constructor called"
              << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    std::cout << "ScavTrap " << this->name << " copy constructor called"
              << std::endl;
}

// Assignment operator
ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    std::cout << "ScavTrap " << this->name << " assignment operator called"
              << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

// Destructor
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->name << " destructor called" << std::endl;
}

// Override attack function
void ScavTrap::attack(const std::string &target) {
    if (this->ep <= 0) {
        std::cout << "ScavTrap " << this->name << " has no energy points left!"
                  << std::endl;
        return;
    }
    if (this->hp <= 0) {
        std::cout << "ScavTrap " << this->name << " is dead and can't attack!"
                  << std::endl;
        return;
    }

    this->ep--;
    std::cout << "ScavTrap " << this->name << " attacks " << target
              << ", causing " << this->attackDamage << " points of damage!"
              << std::endl;
}

// Special ability
void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode"
              << std::endl;
}
