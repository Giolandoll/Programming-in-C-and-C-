/*
CH-230-A
a12 p2.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <iostream>

//Class TournamentMember
class TournamentMember{

    //Attributes of the instances
    private:
        static std::string location;//static attribute

        char firstname[36];
        char lastname[36];  
        char DOB[11];
        double heightinCM;
        double topspeed;
    
    public:
        //Constructors and Destructors
        TournamentMember();

        //Parametric
        TournamentMember(const char * newFirst, const char * newLast,
                         const char *newDOB,double newHeight, double newTopspeed);
        //Copy constructor
        TournamentMember(const TournamentMember&);
        //Destructor
        ~TournamentMember();
        
        //Getters 
        static std::string getLocation();
        char* getFirst();
        char* getLast();
        char *getDOB();
        double getHeight();
        double getTopspeed();

        //Setters
        //Method to modify static attribute
        static void updateLocation(const std::string &newLocation);
        void setFirst(const char *newFirst);
        void setLast(const char *newLast);
        void setDOB(const char *newDOB);
        void setHeight(double newHeight);
        void setTopspeed(double newSpeed);
        

        void print();

};