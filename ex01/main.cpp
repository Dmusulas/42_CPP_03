/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:06:32 by dmusulas          #+#    #+#             */
/*   Updated: 2025/07/04 20:41:54 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

// Expected output should show:
// 1. ClapTrap constructor called first
// 2. ScavTrap constructor called second
// 3. ScavTrap's attack() function (different message)
// 4. Inherited takeDamage() and beRepaired() functions
// 5. guardGate() special ability
// 6. ScavTrap destructor called first
// 7. ClapTrap destructor called second

int main() {
    std::cout << "=== Testing ScavTrap ===" << std::endl;

    // Test constructor chain
    std::cout << "\n--- Creating ScavTrap ---" << std::endl;
    ScavTrap scav("Warrior");

    // Test inherited functions
    std::cout << "\n--- Testing inherited functions ---" << std::endl;
    scav.attack("target");
    scav.takeDamage(30);
    scav.beRepaired(20);

    // Test special ability
    std::cout << "\n--- Testing special ability ---" << std::endl;
    scav.guardGate();

    // Test destructor chain (happens automatically when scav goes out of scope)
    std::cout << "\n--- End of scope (destructor chain) ---" << std::endl;

    return 0;
}
