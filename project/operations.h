#pragma once

#include "Coach.h"

void sort(Passenger* tablica, int rozm);
void remove(Coach& aut, Passenger& pas);
std::ostream& operator<<(std::ostream& out, const Passenger& pas);