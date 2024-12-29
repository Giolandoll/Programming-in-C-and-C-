/*
CH-230-A
a11 p4.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/


#include <iostream>
#include "Creature.h"


using namespace std;

int main() {
    string input;

    while (true) {
        cout << "Enter 'wizard', 'pig', 'troll' or 'quit': ";
        cin >> input;

        if (input == "quit") {
            break;
        } else if (input == "wizard") {
            //Dynamically create a Wizard instance
            Wizard* wizard = new Wizard();

            //Calling the methods
            wizard->run();
            wizard->hover();

            //Deleting the instance
            delete wizard;
        } else if (input == "troll") {
            
            //Dynamically create a Troll instance
            Troll * object1 = new Troll();

            //Calling the methods.
            object1->run();
            object1->work();

            
            //Deleting the instance
            delete object1;
        } else if (input == "pig") {

            //Dynamically create a Pig instance
            Pig* object2 = new Pig();

            // Calling the methods.
            object2->run();
            object2->snitchspeed();

            // Delete the object to avoid memory leaks
            delete object2;
        } else {
            //Invalid message
            cout << "Invalid input. Try again." << endl;
        }
    }

    return 0;
}
