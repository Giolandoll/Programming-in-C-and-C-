/*
CH-230-A
a11 p2.cpp
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

Creature::Creature(): distance(10){
    cout << "Creature created!" << endl;
}    

void Creature::run() const{ 
    cout << "running " << distance << " meters!\n";
}  

Creature::~Creature(){
    cout << "Creature Destroyed\n" << endl;
}



//Wizard class, 
class Wizard : public Creature{
	public:
		Wizard();//Constructor
        ~Wizard();
		void hover() const;

	private:
		int distFactor;//Attribute of wizard
};

Wizard::Wizard() : distFactor(3){
    cout << "Wizard created!" << endl;
}  

Wizard::~Wizard(){
    cout << "Wizard destroyed\n" << endl;
}

void Wizard::hover() const{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}



//Troll class
class Troll: public Creature{
    public:
        Troll();//Constructor
        ~Troll();//Destructor
        void work() const;
    
    private:
        int force;//Attribute
};

Troll::Troll() : force(5){
    cout << "Troll created!" << endl;
}

Troll::~Troll(){
    cout << "Troll destroyed\n" << endl;
}

void Troll::work() const{
    cout << "Work amount is now " << (force * distance) << " Joules" <<endl;
}



//Pig Class
class Pig: public Creature{
    public:
        Pig();//Constructor
        ~Pig();//Destructor
        void snitchspeed() const;

    private:
        int time;//Attribute
};

Pig::Pig() : time(5){
    cout << "Pig created!" << endl;
}

Pig::~Pig(){
    cout << "Pig Destroyed\n" << endl;
}

void Pig::snitchspeed() const{
    cout << "This creature will snitch at speeds exceeding : " << 
                                (distance/ time) << "km/s" <<endl;
}

//Main function
int main(){ 
    //Creating an instance of creature
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    //Creating an instance of wizard
    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    //Creating an instance of troll
    cout <<  "\nCreating a Troll. \n";
    Troll t;
    t.run();
    t.work();

    //Creating an instace of pig
    cout <<  "\nCreating a Pig. \n";
    Pig p;
    p.run();
    p.snitchspeed();

    return 0;
} 