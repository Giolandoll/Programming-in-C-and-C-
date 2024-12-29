/*
CH-230-A
a10 p6.cpp
Giovanni Falconer
gfalconer@jacobs-university.de

*/
#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
    private:  // data members are private
        std::string name;
        double hunger;
        int boredom;
        double height;
        double thirst;
    

    public: // business logic methods are public

        //Constructors
        Critter();//Default
        Critter(std::string);//Constructor with 1 parameter

        //Constructor with all parameters and a default value for the height
        Critter(std::string ,int, int, double newHeight = 10.0);

        Critter(std::string newName, int newHunger, double newThirst,
                int newBoredom, double newHeight);

        
        // setter methods
        void setName(std::string& newname);
        void setHunger(int newhunger);
        void setBoredom(int newboredom);
        void setHeight(double newHeight);
        void setThirst(double newthirst);
        int getHunger();
        double getHeight();
        
        void convertToPercentage(int newhunger);
        int convertToInteger(double newHunger);

        void print();

};