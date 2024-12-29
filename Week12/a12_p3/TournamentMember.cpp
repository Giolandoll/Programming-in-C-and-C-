/*
CH-230-A
a12 p3.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"
#include <cstring>

using namespace std; 

//Inline getters
inline char * TournamentMember::getFirst(){
    return firstname;
}

inline char * TournamentMember::getLast(){
    return lastname;
}

inline char * TournamentMember::getDOB(){
    return DOB;
}

inline double TournamentMember::getHeight(){
    return heightinCM;
}

inline double TournamentMember::getTopspeed(){
    return topspeed;
}

inline std::string TournamentMember::getLocation() {
    return location;
}

//Updating location method
void TournamentMember::updateLocation(const std::string &newLocation){
    location = newLocation;
}

//Inline Setters 
inline void TournamentMember::setFirst(const char *newFirst){
    strncpy(firstname, newFirst, 36);
}

inline void TournamentMember::setLast(const char * newLast){
    strncpy(lastname, newLast, 36);
}

inline void TournamentMember::setDOB(const char *newDOB){
    strncpy(DOB, newDOB, 11);
}

inline void TournamentMember::setHeight(double newHeight){
    heightinCM = newHeight;
}

inline void TournamentMember::setTopspeed(double newSpeed){
    topspeed = newSpeed;
}

//Setting static attribute
string TournamentMember::location = "Nowhere";

//Constructor default
TournamentMember::TournamentMember(){
    cout << "Default constructor" << endl;
    setFirst("Default");
    setLast("Name");
    setDOB("2000-01-01");
    setHeight(0.0);
    setTopspeed(0.0);
}

//Constructor Copy
TournamentMember::TournamentMember(const TournamentMember &z){
    cout << "Copy constructor" << endl;
    setFirst(z.firstname);
    setLast(z.lastname);
    setDOB(z.DOB);
    setHeight(z.heightinCM);
    setTopspeed(z.topspeed);
}

//Constructor Parametric
TournamentMember::TournamentMember(const char *newFirst, const char *newLast, 
                                const char *newDOB, double newHeight, double newTopspeed){
    cout << "Parametric constructor" << endl;
    setFirst(newFirst);
    setLast(newLast);
    setDOB(newDOB);
    setHeight(newHeight);
    setTopspeed(newTopspeed);
}

//Destructor
TournamentMember::~TournamentMember(){
    cout << "Destructor" << endl;
}

//Print method
void TournamentMember::print(){
    
    cout << "Player Details\n" <<endl;
    cout << "First Name : " << getFirst() << endl;
    cout << "Last Name : " << getLast() << endl;
    cout << "Date Of Birth : " << getDOB() << endl;
    cout << "Height(cm) : " << getHeight() << endl;
    cout << "Top speed(kmh) : " << getTopspeed() <<  endl;
    cout << "Location : " << getLocation() << endl;

}



//PLAYER CLASS

//Default Player constructor 
Player::Player():TournamentMember(){
    cout << "Default Player Constructor" << endl;
    setNumber(0);
    setPostion("BENCH");
    setFoot("Both");
    goals = 0;
}

//Parametric Player Constructor 
Player::Player(const char * newFirst, const char * newLast,
                const char *newDOB,double newHeight, double newTopspeed, 
                int newNumber, const string & newPosition, int newGoals,
                const string &newFoot):TournamentMember(newFirst, newLast,
                newDOB, newHeight, newTopspeed){
    cout << "Parametric Player Construcotr" << endl;
    setNumber(newNumber);
    setPostion(newPosition);
    setFoot(newFoot);
    goals = newGoals;
}

//Player copy Constructor
Player::Player(const Player&z) : TournamentMember(z){
    cout << "Copy Player Constructor" << endl;
    setNumber(z.number);
    setPostion(z.position);
    setFoot(z.foot);
    goals = z.goals;
}

//Player destructor 
Player::~Player(){
    cout<< "Player Destructor" << endl;
}

//Inline Getters for player class
inline int Player::getNumber(){
    return number;
}

inline string Player::getPosition(){
    return position;
}

inline int Player::getGoals(){
    return goals;
}

inline string Player::getFoot(){
    return foot;
}

//Inline setters for PLayer class
inline void Player::setNumber(int newNumber){
    number = newNumber;
}

inline void Player::setPostion(const string & newPostion){
    position    = newPostion;
}

inline void Player::setFoot(const string &newFoot){
    foot = newFoot;
}


//Goal increase method
void Player::increaseGoals(){
    goals++;
}

//Print method for player class
void Player::playerPrint(){

    print();//Calling print function in base class

    cout<< "Number : " << getNumber() << endl;
    cout << "Position : " << getPosition() << endl;
    cout << "Goals Scored : " << getGoals() << endl;
    cout << "Preferred Foot : " << getFoot() << "\n" << endl;

    
}
