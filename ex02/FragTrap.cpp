/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 20:43:33 by dmusulas          #+#    #+#             */
/*   Updated: 2025/07/04 21:14:03 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructor
FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    this->hp = 100;
    this->ep = 100;
    this->attackDamage = 30;

    std::cout << "FragTrap " << this->name << " constructor called"
              << std::endl;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    std::cout << "FragTrap " << this->name << " copy constructor called"
              << std::endl;
}

// Assignment operator
FragTrap &FragTrap::operator=(const FragTrap &other) {
    std::cout << "FragTrap " << this->name << " assignment operator called"
              << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

// Destructor
FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->name << " destructor called" << std::endl;
}

// Override attack function
void FragTrap::attack(const std::string &target) {
    if (this->ep <= 0) {
        std::cout << "FragTrap " << this->name << " has no energy points left!"
                  << std::endl;
        return;
    }
    if (this->hp <= 0) {
        std::cout << "FragTrap " << this->name << " is dead and can't attack!"
                  << std::endl;
        return;
    }

    this->ep--;
    std::cout << "FragTrap " << this->name << " attacks " << target
              << ", causing " << this->attackDamage << " points of damage!"
              << std::endl;
}

// Special ability
void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << this->name
              << " is requesting high fives! Come on people!" << std::endl;
}
