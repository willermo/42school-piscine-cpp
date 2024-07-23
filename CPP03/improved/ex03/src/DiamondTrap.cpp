/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 22:21:05 by doriani           #+#    #+#             */
/*   Updated: 2023/12/20 12:36:58 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name), FragTrap(name), ScavTrap(name) {
    this->name = name;
    this->ClapTrap::name = name + "_clap_name";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap " << DARK_GREY << this->getName()
              << " has been created." << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name, int hitPoints, int energyPoints,
                         int attackDamage)
    : ClapTrap(name, hitPoints, energyPoints, attackDamage),
      FragTrap(name, hitPoints, energyPoints, attackDamage),
      ScavTrap(name, hitPoints, energyPoints, attackDamage) {
    this->name = name;
    this->ClapTrap::name = name + "_clap_name";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap " << DARK_GREY << this->getName()
              << " has been created." << RESET << std::endl;
}

DiamondTrap &
DiamondTrap::operator=(const DiamondTrap &player) {
    name = player.name;
    hitPoints = player.hitPoints;
    energyPoints = player.energyPoints;
    attackDamage = player.attackDamage;
    std::cout << GREY << "DiamondTrap " << name << " has been copied" << RESET
              << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << DARK_GREY << "DiamondTrap " << this->getName()
              << " has been destroyed" << RESET << std::endl;
}

void
DiamondTrap::attack(const std::string &target) {
    if (!this->getEnergyPoints()) {
        std::cout << RED_B << "DiamondTrap " << this->getName()
                  << " is too weak to attack!" << RESET << std::endl;
        return;
    }
    ClapTrap *enemy = getPlayer(target);
    if (!enemy)
        std::cout << RED_B << "DiamondTrap " << target
                  << " is not in the Arena! " << this->getName()
                  << " has just wasted his attack!" << RESET << std::endl;
    else {
        std::cout << YELLOW << "DiamondTrap " << this->getName() << " attacks "
                  << target << ", causing " << getAttackDamage()
                  << " points of damage!" << RESET << std::endl;
        enemy->takeDamage(getAttackDamage());
    }
    energyPoints -= 5;
}

void
DiamondTrap::whoAmI(void) {
    std::cout << GREEN_B << "DiamondTrap " << this->getName()
              << " is also known as " << ClapTrap::getName() << RESET
              << std::endl;
}

std::string
DiamondTrap::getName(void) {
    return name;
}