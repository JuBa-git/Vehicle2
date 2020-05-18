//
// Created by Julian on 16.05.2020.
//

#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(const std::string &name, const Pos &pos, unsigned int horsepower, unsigned int seats,
                 const std::string &colour): _name(name), _pos(pos), _horsepower(horsepower), _seats(seats),
                                             _colour(colour)
{
    std::cout << "Hello World, I am a " << getName() << std::endl;
}

void Vehicle::move(Pos to)
{
    std::cout << "Move vehicle " << getName() << " from (" << getPos().x << "," << getPos().y << ") to ("
              << to.x << "," << to.y << ") " << std::endl;
    _pos = to;
}

void Vehicle::enter(Person person)
{
    if (getSeats() > _passengers.size())
    {
     //Begrüßen
        std::list <Person>::iterator it;

        for(it = _passengers.begin(); it != _passengers.end(); it++)
        {
            person.greet(*it);
        }

        for(it = _passengers.begin(); it != _passengers.end(); it++)
        {
            it->greet(person);
        }

     //einsteigen
        _passengers.push_back(person);
    }
    else
    {
        std::cout << "Full" << std::endl;
    }
}

void Vehicle::exit(unsigned int seat_number)
{
    if(_passengers.size() >= seat_number)
    {
        std::list <Person>::iterator it = _passengers.begin();
        for(unsigned int i = 1; i < seat_number; i++)
        {
            it++;
        }

        _passengers.erase(it);
    }
}

unsigned int Vehicle::numPassengers(void)
{
    return _passengers.size();
}

const std::string &Vehicle::getName() const
{
    return _name;
}

const Pos &Vehicle::getPos() const
{
    return _pos;
}

unsigned int Vehicle::getHorsepower() const
{
    return _horsepower;
}

unsigned int Vehicle::getSeats() const
{
    return _seats;
}

const std::string &Vehicle::getColour() const
{
    return _colour;
}