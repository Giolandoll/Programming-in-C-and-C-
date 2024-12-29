/*
CH-230-A
a10 p2.cpp
Giovanni Falconer
gfalconer@jacobs-university.de

*/
#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
    private:  // data members are private
        std::string name;
        int hunger;
        int boredom;
        double height;
        //New members
        double width;
        int age;

    public: // business logic methods are public
        // setter methods
        void setName(std::string& newname);
        void setHunger(int newhunger);
        void setBoredom(int newboredom);
        void setAge(int newage);
        void setWidth(double newWidth);
        // getter method
        int getHunger();
        double getWidth();
        int getAge();
        // service method
        void print();
};