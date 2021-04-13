#define PASSENGER_H

#include <iostream>

class Coach;


class Passenger {
    //Variables
    std::string name;
    std::string surrname;
    int birthDate;
    static int counter;

    //Friends
    friend class Coach;
    friend std::ostream& operator<<(std::ostream& out, const Passenger& pas);

    friend void sort(Passenger*, int);
    friend void remove(Coach aut, const Passenger& pas);
public:
    //Contructors/Destructors
    Passenger();
    Passenger(std::string im, std::string naz, int year);
    Passenger(Passenger& pas);
    Passenger(Passenger& pas, std::string naz);
    ~Passenger();

    //Methods
    void setName(std::string im);
    void setSurrname(std::string naz);
    void setBirthDate(int year);

    std::string getName();
    std::string getSurrname();
    int getBirthDate();
    int getCounter();

    bool operator==(Passenger& pas);

    void display();

};
