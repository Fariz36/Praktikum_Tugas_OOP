#include "Creature.hpp"
#include "Dragon.hpp"

int main() {
    Dragon D("Draco");
    Dragon D1 = D;
    D.speak();
    D.wound();
    D.wound();
    D.print();
    D.speak();

    Creature* C = &D;
    Creature C1 = *C;
    C->wound();
    C->print();
    D.print();
    C1.speak();

    C = &D1;
    C->wound();
    C->wound();
    C->print();
    D.print();

    return 0;
}