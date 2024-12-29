/*
CH-230-A
a12 p3.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"
using namespace std; 


int main(){
    //Default Instance
    Player player0;
    player0.playerPrint();

    
    //Updating location
    TournamentMember::updateLocation("Barcelona");

    //Creating instances with parametric constructor
    Player player1("Lionel","Messi", "2000-12-28", 165.5, 22.2, 10, "Striker",
                    59, "Left");

    Player player2("Chrisstiano","Ronaldo","2004-02-13", 194.6, 25.4, 7,
                    "Striker", 41, "Right");
    
    //Copying player2
    Player player2_copy(player2);

    //Printing instances    
    player1.increaseGoals();
    player1.playerPrint();

    TournamentMember::updateLocation("RealMadrid");

    player2.playerPrint();
    player2_copy.playerPrint();
    
    return 0;
}

