/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:06:25 by dmusulas          #+#    #+#             */
/*   Updated: 2025/07/01 20:40:21 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap() : name(""), hp(10), ep(10), attackDamage(0) {
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
    : name(name), hp(10), ep(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " constructed" << std::endl;
}
// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other)
    : name(other.name), hp(other.hp), ep(other.ep),
      attackDamage(other.attackDamage) {
    std::cout << "ClapTrap " << name << " copy constructed" << std::endl;
}

// Copy assignment operator
ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if (this != &other) {
        name = other.name;
        hp = other.hp;
        ep = other.ep;
        attackDamage = other.attackDamage;
    }
    return *this;
}

// Destructor
ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " destroyed." << std::endl;
}

void ClapTrap::attack(const std::string &target) {
    if (ep <= 0) {
        std::cout << "ClapTrap " << name
                  << " has no energy points left to attack!" << std::endl;
        return;
    } else if (hp <= 0) {
        std::cout << "ClapTrap " << name
                  << " cannot attack because it has no health points left!"
                  << std::endl;
        return;
    }
    ep--;
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
              << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hp <= 0) {
        std::cout << "ClapTrap " << name
                  << " cannot take damage because it has no health points left!"
                  << std::endl;
        return;
    }
    hp = (amount >= hp) ? 0 : hp - amount;
    std::cout << "ClapTrap " << name << " takes " << amount
              << " points of damage! Remaining HP: " << hp << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (ep <= 0) {
        std::cout << "ClapTrap " << name
                  << " has no energy points left to repair!" << std::endl;
        return;
    } else if (hp <= 0) {
        std::cout << "ClapTrap " << name
                  << " cannot be repaired because it has no health points left!"
                  << std::endl;
        return;
    }
    ep--;
    hp += amount;
    std::cout << "ClapTrap " << name << " repairs itself for " << amount
              << " HP! New HP: " << hp << std::endl;
}
