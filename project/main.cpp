#include "operations.h"

int main()
{
    //a)
    //create object
    Passenger pasA;
    //set values;
    pasA.setName("Jan");
    pasA.setSurrname("Kowalski");
    pasA.setBirthDate(1999);

    //display
    std::cout << pasA.getName() << " " << pasA.getSurrname() << " " << pasA.getBirthDate() << std::endl;

    //b)
    //creating object with parametric constructor 
    Passenger pasB("Ania", "Genowska", 1997);

    pasB.display();
    std::cout << std::endl;

    //c)
    //creatinh object copy
    Passenger pasC(pasB);
    pasC.display();
    std::cout << std::endl;

    //d)
    //creatinh object copy with surrname change
    Passenger pasD(pasC, "Ngyuen");
    pasD.display();
    std::cout << std::endl;

    //e)
    //create 4 object tab
    Passenger* tab = new Passenger[4];
    
    tab[0] = pasA;
    tab[1] = pasB;
    tab[2] = pasC;
    tab[3] = pasD;

    //display object tab
    for (int i = 0; i < 4; i++) {
        tab[i].display();
        std::cout << std::endl;
    }

    //f)
    sort(tab, 4);
    for (int i = 0; i < 4; i++) {
        std::cout << tab[i] << std::endl;
    }

    //g)
    delete[] tab;
    std::cout << "Passenger class counter: " << pasB.getCounter() << std::endl;

    //h)
    Coach aut1("Autosan", "Berlin", 150.0, 5);
    aut1.displayCoachData();
    std::cout << std::endl;

    //i) incrising object price
    aut1++; //postinkrementation
    ++aut1; //preinkrementation

    //displaying price after rise
    std::cout << aut1.getTicketPrice() << std::endl;

    //j)
    aut1.addPassenger(pasA);
    aut1.addPassenger(pasB);
    aut1.addPassenger(pasC);
    aut1.addPassenger(pasD);
    aut1.displayPassengers();

    //k)
    remove(aut1, pasB);
    aut1.displayPassengers();

    return 1;
}

