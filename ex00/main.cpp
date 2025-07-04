/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:06:32 by dmusulas          #+#    #+#             */
/*   Updated: 2025/07/01 20:40:37 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    std::cout << "=== ClapTrap Testing ===" << std::endl;

    // Test constructor
    std::cout << "\n--- Creating ClapTraps ---" << std::endl;
    ClapTrap robot1("CP-01");
    ClapTrap robot2("CP-02");

    // Test attack functionality
    std::cout << "\n--- Testing Attack ---" << std::endl;
    robot1.attack("target dummy");
    robot1.attack("another target");

    // Test taking damage
    std::cout << "\n--- Testing Take Damage ---" << std::endl;
    robot1.takeDamage(3);
    robot1.takeDamage(5);
    robot1.takeDamage(15); // Should kill it

    // Test repair
    std::cout << "\n--- Testing Repair ---" << std::endl;
    robot2.beRepaired(5);
    robot2.takeDamage(8);
    robot2.beRepaired(3);

    // Test energy depletion
    std::cout << "\n--- Testing Energy Depletion ---" << std::endl;
    ClapTrap energyTest("Energy-Bot");
    for (int i = 0; i < 12; i++) {
        std::cout << "Action " << (i + 1) << ": ";
        if (i % 2 == 0) {
            energyTest.attack("practice dummy");
        } else {
            energyTest.beRepaired(1);
        }
    }

    // Test copy constructor and assignment
    std::cout << "\n--- Testing Copy Constructor ---" << std::endl;
    ClapTrap original("Original");
    ClapTrap copy(original);

    std::cout << "\n--- Testing Assignment Operator ---" << std::endl;
    ClapTrap assigned("ToBeAssigned");
    assigned = original;

    std::cout << "\n--- End of Tests (Destructors will be called) ---"
              << std::endl;
    return 0;
}
