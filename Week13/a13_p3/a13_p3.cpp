/*
CH-230-A
a13 p3.cpp
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <iostream>
#include <iostream>
#include <fstream>
using namespace std;


int main(){

    //Declaring variables
    int n;

    //Prompt and reading the number of files to be read
    cout << "Enter the number of files: ";
    cin >> n;
    string files[n];//Declaring array to store them

    //For loop to collect all the file names
    for(int i = 0; i < n; i++){
        cout << "File name: " ;
        cin >> files[i];
    }

    //Opening the output file in appending mode
    ofstream outfile("concatn.txt", ios::app);
    //if statement to continue with the algorithm if the file opens
    if(outfile.is_open()){
        for(int i = 0; i<n; i++){
            //Opening the input files within the for loop
            ifstream infile(files[i]);
            //If statement to continue the algorithm if the file opens
            if(infile.is_open()){
                string line;

                /*Reading each line from the files and adding them to the
                Output file*/
                while (getline(infile, line)) {
                    outfile << line <<endl;
                }
                infile.close();//Closing each inputfile after use

                outfile << "\n";//Adding space between each files content
            }else{
                //Error message if any input file fails to open
                 cerr << "Error opening input file" << endl;
            }
        }
           
        outfile.close();//Closing output file
    }else{
        //Error message if the output file fails to open
        cerr << "Error opening output file" << endl;
    }


    return 0;
}