/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:18:40 by doriani           #+#    #+#             */
/*   Updated: 2023/12/17 20:29:04 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int
main(void) {

    const Animal *animals[10];
    std::cout << WHITE_K "Calling constructors" << RESET << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << std::endl
                  << GREEN_B << "Constructing animal " << i << RESET
                  << std::endl;
        animals[i] = new Dog();
    }
    for (int i = 5; i < 10; i++) {
        std::cout << std::endl
                  << GREEN_B << "Constructing animal " << i << RESET
                  << std::endl;
        animals[i] = new Cat();
    }
    std::cout << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << std::endl;
        std::cout << WHITE_K "Testing Animal " << i << RESET << std::endl;
        std::cout << BLUE << "Animal " << i << " getType(): " << RESET;
        std::cout << animals[i]->getType() << std::endl;
        std::cout << BLUE << "Animal " << i << " makeSound(): " << RESET;
        animals[i]->makeSound();
        std::cout << BLUE << "First three ideas of animal " << i << ": "
                  << RESET << std::endl;
        for (int j = 0; j < 3; j++) {
            if (i < 5)
                std::cout << "\t" << WHITE_B << ((Dog *) animals[i])->getIdea(j)
                          << RESET << std::endl;
            else
                std::cout << "\t" << WHITE_B << ((Cat *) animals[i])->getIdea(j)
                          << RESET << std::endl;
        }
        std::cout << std::endl;
    }

    std::cout << YELLOW_B
              << "Setting idea #1 of animal 0 to \"Idea #1 modified\"" << RESET
              << std::endl;
    ((Dog *) animals[0])->setIdea(1, "Idea #1 modified");
    std::cout << BLUE << "First three ideas of animal 0: " << RESET
              << std::endl;
    for (int j = 0; j < 3; j++) {
        std::cout << "\t" << WHITE_B << ((Dog *) animals[0])->getIdea(j)
                  << RESET << std::endl;
    }
    std::cout << std::endl;

    std::cout << WHITE_K "Calling destructors" << RESET << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << std::endl
                  << RED_B << "Deleting animal " << i << RESET << std::endl;
        delete animals[i];
    }
    std::cout << std::endl;

    std::cout << WHITE_K "Further tests" << RESET << std::endl;
    std::cout << std::endl
              << GREEN_B << "Constructing animal \"Animal\"" << RESET
              << std::endl;
    Animal *animal = new Animal("Animal");
    std::cout << std::endl
              << GREEN_B << "Constructing animal \"Dog\"" << RESET << std::endl;
    Animal *dog = new Dog();
    std::cout << std::endl
              << GREEN_B << "Constructing animal \"Cat\"" << RESET << std::endl;
    Animal *cat = new Cat();
    std::cout << std::endl
              << GREEN_B << "Constructing animal \"Animal2\" with cc" << RESET
              << std::endl;
    Animal animal2(*animal);
    std::cout << std::endl
              << GREEN_B << "Constructing animal \"Dog2\" with cc" << RESET
              << std::endl;
    Animal dog2(*dog);
    std::cout << std::endl
              << GREEN_B << "Constructing animal \"Cat2\" with cc" << RESET
              << std::endl;
    Animal cat2(*cat);
    std::cout << std::endl
              << GREEN_B << "Constructing animal \"lonelyBoy\" with ao" << RESET
              << std::endl;
    Animal lonelyBoy;
    lonelyBoy = *animal;
    std::cout << std::endl
              << RED_B << "Deleting animal \"Animal\"" << RESET << std::endl;
    delete animal;
    std::cout << std::endl
              << RED_B << "Deleting animal \"Dog\"" << RESET << std::endl;
    delete dog;
    std::cout << std::endl
              << RED_B << "Deleting animal \"Cat\"" << RESET << std::endl;
    delete cat;
    std::cout << std::endl
              << RED_B << "Autodeleting animals on stack" << RESET << std::endl;
    return (0);
}