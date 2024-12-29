/*
CH-230-A
a9 p5.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main(){

    //Variable declaration
    string name;
    int guess, tries = 0, correct = 0, randomnum;

    //Input of user's name
    cout << "Enter your name: ";
    getline(cin, name);

 
    //Getting a random number between 1 and 100
    srand(static_cast<unsigned int>(time(0)));
    randomnum = rand();
    randomnum = (randomnum % 100)+1;

    //Do while loop to continue the game until  the number is guessed correctly
    do{
        
        cout << "Enter a guess: ";
        cin >> guess;
        tries++;//Incrementing the number of tries each iteration of the loop

        //if statement checking if the user guessed the number correctly 
        if(guess == randomnum){
            correct =1;
        }else if(guess > randomnum){
            cout<< "Too high!! Try again." << endl;
        }else{
            cout<< "Too low!! Try again." << endl;
        } 

    }while(correct == 0);

    //Output of the congrats statement.
    cout << "Congrats " << name << "!! You've guessed correctly!!" <<
    " Attempts: " << tries << endl;

    return 0;
}