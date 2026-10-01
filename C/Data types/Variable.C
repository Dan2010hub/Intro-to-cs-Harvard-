#include <cs50.h> 
#include <stdio.h>

int main(void) {
    // // 1. DECLEARATION VS INITIZLIZATION
    //     // int age; /* deceleration only*/
    //     // int age = 25; /* initlization */

    // // 2. DATA TYPES (Real C)
    // int count = 10; /*$ bytes - whole number*/
    // float pi = 3.14f; /* 4 bytes decimal (add 'f)*/
    // double pi2 = 3.13159; /*8 bytes more accurate decimal*/
    // char grade = 'A'; /* 1 byte */
    
    // // 3. Real C vs CS350 C
    // // Real C has no string 
    // char name[] = "Victor"; /* this is the real string*/

    // // Real C has no bool unless you include 
    // // #include <stdbool.h>
    // bool isReady = true; 
    // //  old c way = int isReady = 1; (1 = true, 0 = false)

    char Name [] = "Victor";
    int age = 20;
    char Grade = 'A';
    double CGPA = 4.92;
    
    printf("Hello I am %s, I am %i years old, My grade is %c, My CGPA is %f\n ", Name, age, Grade, CGPA);

    // caculations

    int a = 15;
    int b = 25;
    int avg = (a + b) / 2;
    printf("Avg is %i\n" ,avg );




}