#include "Passenger.h"

//Contructors/Destructors
Passenger::Passenger() : name(""), surrname(""), birthDate(0) 
{
    std::cout << "Deafult Passenger class constructor, object nr: " << ++counter << std::endl; 
}

Passenger::Passenger(std::string im, std::string naz, int year) : name(im), surrname(naz), birthDate(year) 
{ 
    std::cout << "Parametric Passenger class constructor, object nr: " << ++counter << std::endl; 
}

Passenger::Passenger(Passenger& pas) : name(pas.name), surrname(pas.surrname), birthDate(pas.birthDate) 
{ 
    std::cout << "Copy Passenger class constructor, object nr: " << ++counter << std::endl; 
}

Passenger::Passenger(Passenger& pas, std::string naz) : name(pas.name), surrname(naz), birthDate(pas.birthDate) 
{
    std::cout << "Copy Passenger class constructor with name change, object nr: " << ++counter << std::endl;
}

Passenger::~Passenger() 
{ 
    std::cout << "Deafult Passenger class destructor, counter: " << --counter << std::endl; 
}


//Methods
int Passenger::counter = 0;

void Passenger::display() 
{
    std::cout << name << " " << surrname << " " << birthDate;
}

void Passenger::setName(std::string im) 
{ 
    name = im; 
}

void Passenger::setSurrname(std::string naz)
{ 
    surrname = naz; 
}

void Passenger::setBirthDate(int year) 
{ 
    birthDate = year; 
}

std::string Passenger::getName() 
{ 
    return name; 
}

std::string Passenger::getSurrname() 
{ 
    return surrname;
}
int Passenger::getBirthDate() 
{ 
    return birthDate; 
}

int Passenger::getCounter() 
{ 
    return counter;
}


//Operators
bool Passenger::operator==(Passenger& pas) 
{
    if (surrname == pas.surrname) 
    {
        if (name == pas.name) 
        {
            if (birthDate == pas.birthDate) 
            {
                return true;
            }
        }
    }
    return false;
}