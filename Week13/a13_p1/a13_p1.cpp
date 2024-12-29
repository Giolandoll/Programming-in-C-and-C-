/*
CH-230-A
a13 p1.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    char ch;

    //Get the input file name from user
    cout << "Enter the name of the file (e.g., something.txt): ";
    string inputFileName;
    cin >> inputFileName;

    //Extracting base name and extension from the input file name
    size_t dotIndex = inputFileName.find_last_of('.');
  

    string baseName = inputFileName.substr(0, dotIndex);
    string extension = inputFileName.substr(dotIndex);

    string outputFileName = baseName + "_copy" + extension;

    //Open the input file
    ifstream inputFile(inputFileName);

    //Checking if the input file exits
    if (!inputFile.is_open()) {
        cerr << "Error: Unable to open input file." << endl;
        return 1; //Exit with failure message
    }

    //Open the output file
    ofstream outputFile(outputFileName);

    //Check if the output file was successfully opened
    if (!outputFile.is_open()) {
        cerr << "Error: Unable to create output file." << endl;
        return 1; //Exit with failure message
    }

    //Copying the contents of the input file to the output file
    while (inputFile.get(ch)) {
        outputFile.put(ch);
    }

    //Close the input and output files
    inputFile.close();
    outputFile.close();

    cout << "File copy created.The copied file is : " << outputFileName << endl;

    return 0;
}
