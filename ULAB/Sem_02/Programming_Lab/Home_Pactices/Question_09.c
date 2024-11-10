/*
Write a program to input a letter and display it in opposite case, i.e., if the given letter
is in upper case, display it in lower case and vice-versa.
*/

#include <stdio.h>
int main(){
    char letter, reversed_letter;
    printf("Enter a letter (Capital or Small) : ");
    scanf(" %c",&letter);

    if(letter>= 'A' && letter<='Z'){
        reversed_letter = letter + 32;
        printf("You entered capital letter %c and it's small letter is %c\n",letter, reversed_letter);
    }
    else if(letter>='a' && letter<='z'){
        reversed_letter = letter - 32;
        printf("You entered small letter %c and it's capital letter is %c\n",letter, reversed_letter);
    }
    else{
        printf("Invalid input!");
    }


return 0;
}
