/*
CH-230-A
a7 p6.c
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Struct holding name and age of persons
struct person {
    char name[30];
    int age;
};


//Swap function used by bubble sort array
void swap(struct person *a, struct person *b) {
    struct person temp = *a;
    *a = *b;
    *b = temp;
}

//Function to compare each element  by the name.
int compareByName(const struct person *a, const struct person *b) {
    int nameComparison = strcmp(a->name, b->name);
    if (nameComparison != 0) {
        return nameComparison;
    } else {
        return a->age - b->age;//Comparison by age if both names are the same
    }
}

//Function to compare each element by the age
int compareByAge(const struct person *a, const struct person *b) {
    int ageComparison = a->age - b->age;
    if (ageComparison != 0) {
        return ageComparison;
    } else {
        return strcmp(a->name, b->name);//Comparion by name if same age
    }
}

//Bubble sort algorithm to sort the array based on the given criteria
//And using function pointer 
void bubbleSort(struct person arr[], int n, 
            int (*compare)(const struct person *, const struct person *)) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (compare(&arr[j], &arr[j + 1]) > 0) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}


int main(){
    //Varible declaration
    int n;
    scanf("%d", &n);

    
    // Array declaration
    struct person details[n];

    //Input of values into the array
    for (int i = 0; i<n; i++){
        scanf(" %s", details[i].name);
        scanf("%d", &details[i].age);
    }
    //Calling bubble sort to use compareByName function to sort
    bubbleSort(details, n, &compareByName);
    for (int i = 0; i < n; i++) {
        printf("{%s, %d}; ", details[i].name, details[i].age);
    }
    printf("\n");

    //Caliing bubble sort to use compareByAge function to sort
    bubbleSort(details, n, &compareByAge);
    for (int i = 0; i < n; i++) {
        printf("{%s, %d}; ", details[i].name, details[i].age);
    }
    printf("\n");

    return 0;
}