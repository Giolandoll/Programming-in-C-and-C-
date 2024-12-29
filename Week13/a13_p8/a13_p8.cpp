/*
CH-230-A
a13 p7.cpp
Giovanni Falconer
gfalconer@jacobs-university.de

*/


#include <iostream>
#include <string>
using namespace std;

class MotorTroubleException : public exception {
public:
    const char* what() const noexcept override {
        return "This motor has problems";
    }
};

class Motor {
public:
    Motor() {
        // Simulate motor problems
        throw MotorTroubleException();
    }
};

class Car {
public:
    Car() {
        // Create a Motor object for the car
        try {
            motor = new Motor();
        } catch (const MotorTroubleException& e) {
            // If Motor has problems, rethrow the exception
            throw;
        }
    }

    ~Car() {
        delete motor;
    }

private:
    Motor* motor;
};

class Garage {
public:
    Garage() {
        // Create a Car object for the garage
        try {
            car = new Car();
        } catch (const MotorTroubleException& e) {
            // If Car's Motor has problems, throw a new exception
            throw runtime_error("The car in this garage has problems with the motor");
        }
    }

    ~Garage() {
        delete car;
    }

private:
    Car* car;
};

int main() {
    try {
        Garage garage;
    } catch (const exception& e) {
        cerr << "Exception: " << e.what() << endl;
    }

    return 0;
}
