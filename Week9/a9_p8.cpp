/*
CH-230-A
a9 p8.cpp
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <iostream>
using namespace std;

//Function to find max in array and subtract it from all elements in array
void subtract_max(int *&array, int size){
    
    //Variable declaration
    int max = array[0];
    
    for (int i = 1; i<size; i++){//For loop to iterate through array
        if (array[i] > max)//Conditional statement to find  the max value
            max = array[i];
    }

    //For loop to iterate through array and subtract maxx from each element
    for(int i = 0; i<size; i++){
        array[i] -= max;
    }

}

//Function to deacllocate the memory allocated for the array
void deallocate(int *&array){
    delete[] array;
}

int main(){
    //Variable declaration
    int n; 
    //Prompt to enter size of array
    cout << "Enter the size of array: ";
    cin >> n;

    //Allocating memory for the array.
    int * array = new int[n];
    if(array == NULL){//Failure message for allocation
        cout << "Memory allocation failed" << endl;
        exit(1);
    }
    //For loop to collect the values of the array
    for(int i = 0; i <n; i++){
        cout << "Enter a value:" << endl;
        cin >> array[i];
    }
    

    //Showing the array before calling the subtract max function
    cout << "Array values: ";
    for (int i = 0; i<n; i++)
        cout << array[i] << ", ";
    cout << endl;

    subtract_max(array, n);//Calling subtract max function

    //Showing the array after calling the subtract max function
    cout << "Array values after function: ";
    for (int i = 0; i<n; i++)
        cout << array[i] << ", ";
    cout << endl;

    
    deallocate(array);//Calling deallocate function to deallocate memory
    return 0;
}