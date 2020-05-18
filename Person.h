//
// Created by Julian on 16.05.2020.
//

#ifndef VEHICLE2_PERSON_H
#define VEHICLE2_PERSON_H
#include <string>


class Person
{
public:
    Person(const std::string &name, const std::string &nationality);

    void greet(Person other);

    //const std::string &getName() const;
    //const std::string &getNationality() const;

private:
    std::string _name;
    std::string _nationality;

};


#endif //VEHICLE2_PERSON_H
