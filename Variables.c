#include <stdio.h>

int main(){

    // variable =  Allocted space in  memory to strore a value.
    //             We refer to a variable's name to access the stored value.
    //             That variable now behaves as if it was the value it contains.
    //             But we need to declare what type of data we are storing.

    int x; //declaration
    x = 13; //initialization
    int y = 321; //declaration + initialization

    int age = 21; //integer
    float gpa = 2.05; //floating point number
    char grade = 'C'; //single character
    char name[] = "Bro";//array of characters

    printf("Hello  %s\n",name);//The %s is used to represent strings
    printf("You are %d years old\n",age); //The %d data type format is used for integers.
    printf("Your average grade is %c\n",grade); // The %c is used to represent char datatypes
    printf("Your gpa is %f\n",gpa);

    return 0;
}