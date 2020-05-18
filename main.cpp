#include <iostream>
#include "Person.h"
#include "Vehicle.h"

int main()
{
    //Alle Personen
    Person a("Julian", "de");
    Person b("Mike", "en");
    Person c("Stefano", "it");
    Person d("Carlos", "es");

    // Begrüßungen
    a.greet(b);
    d.greet(c);


    //Alle Autos
    Vehicle A("Golf", {4, 0}, 210, 5, "red");
    Vehicle B("Huracan", {0, 5}, 639, 2, "blue");
    Vehicle C("Mustang", {400, -50}, 258, 4, "black");

    //Auto abfragen
    std::cout << "Name of A: " << A.getName() << std::endl;
    std::cout << "Name of B: " << B.getName() << std::endl;

    //fahren
    A.move({23, 5});
    B.move({-45, 455});

    //einsteigen
    A.enter(a);
    A.enter(b);
    A.enter(d);

    // aussteigen
    A.exit(2);

    //Personen im Auto
    std::cout << "Passengers: " << A.numPassengers() << std::endl;

    return 0;
}
