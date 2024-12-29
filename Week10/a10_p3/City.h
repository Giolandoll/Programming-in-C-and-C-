/*
CH-230-A
a10 p3
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <string>
using namespace std;

//Declaration of the class CITY
class City{
    private:
        string name;
        int population;
        string mayor;
        double area;
    
    public:
        //Setter methods
        void setName(const string &newName);
        void setMayor(const string &newMayor);
        void setPopulation(int newPopulation);
        void setarea(double area);

        // Getter methods
        string getName();
        int getPopulation();
        string getMayor();
        double getArea();

};