//
// Created by Julian on 16.05.2020.
//

#ifndef VEHICLE2_VEHICLE_H
#define VEHICLE2_VEHICLE_H
#include <string>
#include <memory>
#include "Struct.h"
#include "Person.h"

#include<list>

class Vehicle
{
public:
    Vehicle(const std::string &name, const Pos &pos, unsigned int horsepower, unsigned int seats,
            const std::string &colour);

    void move(Pos to);
    void enter(Person person);
    void exit(unsigned int seat_number);
    unsigned int numPassengers();

    const std::string &getName() const;
    const Pos &getPos() const;
    unsigned int getHorsepower() const;
    unsigned int getSeats() const;
    const std::string &getColour() const;

private:
    std::string _name;
    Pos _pos;
    unsigned int _horsepower;
    unsigned int _seats;
    std::string _colour;

    std::list<Person> _passengers;
};


#endif //VEHICLE2_VEHICLE_H
