#include <stdio.h>
#include <string.h>

void print_concat(char string1[], char string2[]) {
    printf("concatenation=%s\n", strcat(string1, string2));
}

int main() {
    char string1[256], string2[256], copy[256], c;
    int idx, position;

    // Input from keyboard
    fgets(string1, sizeof(string1), stdin);
    fgets(string2, sizeof(string2), stdin);

    // Remove newline characters
    if (string1[strlen(string1) - 1] == '\n') {
        string1[strlen(string1) - 1] = '\0';
    }
    if (string2[strlen(string2) - 1] == '\n') {
        string2[strlen(string2) - 1] = '\0';
    }

    scanf(" %c", &c); // Reading char from keyboard

    strcpy(copy, string2); // Copying string 2 to 'copy'

    // Output
    printf("length1=%lu\n", strlen(string1));
    printf("length2=%lu\n", strlen(string2));
    print_concat(string1, string2); // Calling print_concat function
    printf("copy=%s\n", copy);

    // Manually compare the strings character by character
    idx = 0;
    while (string1[idx] != '\0' && string2[idx] != '\0' && string1[idx] == string2[idx]) {
        idx++;
    }

    if (string1[idx] < string2[idx]) {
        printf("one is smaller than two\n");
    } else if (string1[idx] > string2[idx]) {
        printf("one is larger than two\n");
    } else {
        if (string1[idx] == '\0' && string2[idx] == '\0') {
            printf("one is equal to two\n");
        } else {
            printf("one is larger than two\n");
        }
    }

    // Searching strings for the character entered
    position = -1; // Initialize position to -1
    for (idx = 0; string2[idx] != '\0'; ++idx) {
        // Exiting the loop when character is found in string
        if (string2[idx] == c) {
            position = idx;
            break;
        }
    }

    // If statement to print whether or not the character was found and in what position
    if (position != -1) {
        printf("position=%d\n", position);
    } else {
        printf("The character is not in the string\n");
    }

    return 0;
}
