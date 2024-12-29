/*
CH-230-A
a12 p2.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"
using namespace std; 


int main(){
    //Default Instance
    TournamentMember player0;
    player0.print();

    
    //Updating location
    TournamentMember::updateLocation("Barcelona");

    //Creating instances with parametric constructor
    TournamentMember player1("Lionel","Messi", "2000-12-28", 165.5, 22.2);

    TournamentMember player2("Christiano","Ronaldo","2004-02-13", 194.6, 25.4);
    
    //Copying player2
    TournamentMember player2_copy(player2);

    //Printing instances
    
    player1.print();

    TournamentMember::updateLocation("RealMadrid");

    player2.print();
    player2_copy.print();
    
    return 0;
}

