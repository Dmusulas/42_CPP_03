/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:06:32 by dmusulas          #+#    #+#             */
/*   Updated: 2025/07/04 21:03:38 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <sstream>

int main() {
    std::cout << "===============================================" << std::endl;
    std::cout << "            TESTING FRAGTRAP" << std::endl;
    std::cout << "===============================================" << std::endl;

    // Test 1: Constructor/Destructor chain
    std::cout << "\n=== TEST 1: Constructor/Destructor Chain ===\n"
              << std::endl;
    {
        std::cout << "--- Creating FragTrap ---" << std::endl;
        FragTrap frag("Fraggy");
        std::cout << "--- FragTrap going out of scope ---" << std::endl;
    }

    // Test 2: Basic FragTrap functionality
    std::cout << "\n=== TEST 2: Basic FragTrap Functions ===\n" << std::endl;
    {
        FragTrap frag("Warrior");

        std::cout << "\n--- Testing attack function ---" << std::endl;
        frag.attack("bandit");
        frag.attack("goblin");
        frag.attack("orc");

        std::cout << "\n--- Testing takeDamage function ---" << std::endl;
        frag.takeDamage(30);
        frag.takeDamage(50);

        std::cout << "\n--- Testing beRepaired function ---" << std::endl;
        frag.beRepaired(20);
        frag.beRepaired(40);

        std::cout << "\n--- Testing special ability ---" << std::endl;
        frag.highFivesGuys();
        frag.highFivesGuys();
    }

    // Test 3: Edge cases
    std::cout << "\n=== TEST 3: Edge Cases ===\n" << std::endl;
    {
        FragTrap frag("Tester");

        std::cout << "\n--- Testing when FragTrap is 'killed' ---" << std::endl;
        frag.takeDamage(150);   // Should exceed 100 HP
        frag.attack("nothing"); // Should fail
        frag.beRepaired(10);    // Should still work

        std::cout << "\n--- Testing energy depletion ---" << std::endl;
        FragTrap energyTest("EnergyTester");
        // FragTrap starts with 100 energy, let's use it up
        for (int i = 0; i < 102; i++) {
            std::ostringstream oss;
            oss << "dummy" << i;
            std::string newName = oss.str();
            energyTest.attack(newName);
        }

        std::cout << "\n--- Trying to repair without energy ---" << std::endl;
        energyTest.beRepaired(10); // Should fail due to no energy
    }

    // Test 4: Copy operations
    std::cout << "\n=== TEST 4: Copy Constructor and Assignment ===\n"
              << std::endl;
    {
        std::cout << "--- Testing copy constructor ---" << std::endl;
        FragTrap original("Original");
        FragTrap copy(original);

        std::cout << "\n--- Testing assignment operator ---" << std::endl;
        FragTrap assigned("Assigned");
        assigned = original;

        std::cout << "\n--- Testing copied objects work independently ---"
                  << std::endl;
        original.attack("target1");
        copy.attack("target2");
        assigned.attack("target3");

        original.highFivesGuys();
        copy.highFivesGuys();
        assigned.highFivesGuys();
    }

    // Test 5: Multiple FragTraps
    std::cout << "\n=== TEST 5: Multiple FragTraps ===\n" << std::endl;
    {
        std::cout << "--- Creating multiple FragTraps ---" << std::endl;
        FragTrap frag1("Alpha");
        FragTrap frag2("Beta");
        FragTrap frag3("Gamma");

        std::cout << "\n--- Testing all FragTraps ---" << std::endl;
        frag1.attack("enemy1");
        frag2.attack("enemy2");
        frag3.attack("enemy3");

        frag1.highFivesGuys();
        frag2.highFivesGuys();
        frag3.highFivesGuys();

        std::cout << "\n--- All FragTraps going out of scope ---" << std::endl;
    }

    std::cout << "\n==============================================="
              << std::endl;
    std::cout << "         FRAGTRAP TESTS COMPLETED" << std::endl;
    std::cout << "===============================================" << std::endl;

    return 0;
}
