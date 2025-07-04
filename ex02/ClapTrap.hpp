/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:06:29 by dmusulas          #+#    #+#             */
/*   Updated: 2025/07/04 21:14:47 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

// Includes
#include <iostream>
#include <ostream>
#include <string>

class ClapTrap {
protected:
    // Member variables
    std::string name;
    unsigned int hp;
    unsigned int ep;
    unsigned int attackDamage;

public:
    // Orthodox Canonical Form
    // Default constructor
    ClapTrap();

    // Parameterized constructor
    ClapTrap(const std::string &name);

    // Copy constructor
    ClapTrap(const ClapTrap &other);

    // Copy assignment operator
    ClapTrap &operator=(const ClapTrap &other);

    // Destructor
    ~ClapTrap();

    // Public interface
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    // Getters

    std::string getName() const;
    int getHp() const;
    int getEp() const;
    int getAttackDamage() const;

    // Setters
    void setName(const std::string &name);
    void setHp(int hp);
    void setEp(int ep);
    void setAttackDamage(int attackDamage);
};

#endif
