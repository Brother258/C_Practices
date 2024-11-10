/*
Write a C program to take a letter from the English alphabet as input and display both
the previous and the next letters with ASCII codes. Assume that input will always be
chosen from B to Y or b to y.
Sample Input: d
Sample Output:
Previous letter with ASCII: c 99
Next letter with ASCII: e 101
*/

#include <stdio.h>
int main(){
    char letter, next_letter, previous_letter;

    printf("Enter a letter : ");
    scanf("%c", &letter);

    previous_letter = letter - 1;
    next_letter = letter + 1;

    printf("Previous letter with ASCII: %c %d\n", previous_letter, previous_letter);
    printf("Next letter with ASCII: %c %d\n", next_letter, next_letter);


return 0;
}
