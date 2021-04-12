#include "Coach.h"

//Contructors/Destructors
Coach::Coach(std::string nazwa, std::string cel, float cena, int limit) 
    : coachName(nazwa), destination(cel), ticketPrice(cena), spaceLimit(limit) 
{
    tab = new Passenger[spaceLimit];
    std::cout << "Parametric Couch class constructor" << std::endl;
}

Coach::~Coach()
{
    delete[] tab;
}

//Methods
int Coach::counter = 0;

void Coach::decreaseCounter() 
{ 
    --counter; 
}

void Coach::addPassenger(Passenger& doDodania)
{
    Passenger temp = doDodania;
    if (spaceLimit > counter) 
    {
        tab[counter] = temp;
        ++counter;
    }
}

void Coach::displayPassengers() 
{
    for (int i = 0; i < counter; i++) 
    {
        std::cout << tab[i] << std::endl;
    }
}

void Coach::displayCoachData()
{
    std::cout << coachName << " " << destination << " " << ticketPrice << " " << spaceLimit;
}

float Coach::getTicketPrice()
{ 
    return ticketPrice; 
}

int Coach::getCounter()
{ 
    return counter; 
}
Passenger* Coach::getTab()
{ 
    return tab; 
}


//Operators
float Coach::operator++() 
{
    return ++ticketPrice;
}

float Coach::operator++(int x) 
{
    return operator++();
}