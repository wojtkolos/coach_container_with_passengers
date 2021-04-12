#include "operations.h"

void sort(Passenger* tablica, int rozm) {
    Passenger temp;
    for (int i = 0; i < rozm; i++)
        for (int j = 1; j < rozm - i; j++)
            if (tablica[j - 1].getBirthDate() > tablica[j].getBirthDate()) {
                //zamiana miejscami
                temp = tablica[j - 1];
                tablica[j - 1] = tablica[j];
                tablica[j] = temp;
            }
}

void remove(Coach& aut, Passenger& pas) {
    Passenger* tabl = aut.tab;

    for (int i = 0; i < aut.getCounter(); i++) {
        if (tabl[i] == pas) {
            for (int j = i; j < aut.getCounter(); j++) {
                tabl[j] = tabl[j + 1];
            }
            tabl[aut.getCounter() - 1] = Passenger();
            aut.decreaseCounter();
            i--;
        }
    }
}

std::ostream& operator<<(std::ostream& out, const Passenger& pas) {
    return out << pas.name << " " << pas.surrname << " " << pas.birthDate;
}