#include "Passenger.h"

class Coach {
private:
    //Variables
    std::string coachName;
    std::string destination;
    float ticketPrice;
    int spaceLimit;
    Passenger* tab;
    static int counter;

    //Friends
    friend void remove(Coach& aut, Passenger& pas);
public:
    //Contructors/Destructors
    Coach(std::string nazwa, std::string cel, float cena, int limit);
    ~Coach();

    //Methods
    void addPassenger(Passenger& doDodania);
    void decreaseCounter();

    void displayPassengers();
    void displayCoachData();

    float getTicketPrice();
    int getCounter();
    Passenger* getTab();

    //Operators
    float operator++();
    float operator++(int);
};
