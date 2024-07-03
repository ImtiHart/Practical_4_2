#include <stdio.h>
#include <stdlib.h>

/*Define a union called "Color" that contains three members: red, green, and blue, each of type
unsigned char. Write a program to assign values to the union members and print the RGB color
values. Define a structure called "Student" with members "name" (string), "rollNumber"
(integer), and "marks" (float). Write a program to create an array of five "Student" structures
and initialize their members.*/

int number, y, x; /*Initialize variables*/

struct Student /*Intitialze structure*/
{
    char name[20];
    int rollNumber;
    float marks;
};


union Color /* Initialize union*/
{
    unsigned char red;
    unsigned char green;
    unsigned char blue;
};

int main(){
    /*Print out RGB values*/
    union Color R, G, B;

    R.red = 255;
    G.green = 0;
    B.blue = 0;
    printf("Red: (%d, %d, %d)\n", R.red, G.green, B.blue);

    union Color R2, G2, B2;

    R2.red = 0;
    G2.green = 255;
    B2.blue = 0;
    printf("Green: (%d, %d, %d)\n", R2.red, G2.green, B2.blue);

    union Color R3, G3, B3;

    R3.red = 0;
    G3.green = 0;
    B3.blue = 255;
    printf("Blue: (%d, %d, %d)\n", R3.red, G3.green, B3.blue);



    struct Student student[5];/*Array holds 5 students*/


    for (x = 0; x < 5; x++) { /*Find information of students*/
    printf("What is your name: ");
    scanf("%s", &student[x].name);
    printf("What is your roll number: ");
    scanf("%d", &student[x].rollNumber);
    printf("What is your marks: ");
    scanf("%f", &student[x].marks);
        }


        printf("Choose a student by their placement when inputted (1 to 5): ");
        scanf("%d", &number);

        if (number>0 && number<6) { /*Display student information*/
            printf("Student %s has a roll number of %d and their marks are %f\n",student[number - 1].name, student[number - 1].rollNumber, student[number - 1].marks);
        }
        else {
            printf("Invalid student number. Please enter a number from 1 to 5.\n");
        }
}


