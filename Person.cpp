//
// Created by Julian on 16.05.2020.
//

#include "Person.h"
#include <iostream>

Person::Person(const std::string &name, const std::string &nationality): _name(name), _nationality(nationality)
{
    std::cout << "Hello, I am " << name << " from " << nationality << "." << std::endl;
};

void Person::greet(Person other)
{
    std::cout << _name << ": ";

    if (other._nationality == "de")
    {
        std::cout << "Hallo " << other._name << "!" << std::endl;
    }

    if (other._nationality == "en")
    {
        std::cout << "Hello " << other._name << "!" << std::endl;
    }

    if (other._nationality == "it")
    {
        std::cout << "Ciao " << other._name << "!" << std::endl;
    }

    if (other._nationality == "es")
    {
        std::cout << "Hola " << other._name << "!" << std::endl;
    }
}