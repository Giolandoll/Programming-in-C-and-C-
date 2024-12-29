/*
CH-230-A
a11 p3.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/


#include <iostream>

using namespace std;

//Creature class
class Creature {
	public:
		Creature();  //Contructor
		void run() const;
        ~Creature();//Destructor

	protected:
		int distance;//Attribute
};

//Wizard Class
class Wizard : public Creature{
	public:
		Wizard();//Constructor
        ~Wizard();//Destructor
		void hover() const;

	private:
		int distFactor;//Attribute of wizard
};

//Troll class
class Troll: public Creature{
    public:
        Troll();//Constructor
        ~Troll();//Destructor
        void work() const;
    
    private:
        int force;//Attribute
};

//Pig Class
class Pig: public Creature{
    public:
        Pig();//Constructor
        ~Pig();//Destructor
        void snitchspeed() const;

    private:
        int time;//Attribute
};