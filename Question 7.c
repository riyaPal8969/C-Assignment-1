#include <stdio.h>

/* 
7. Write a C program that converts kilometres per hour to miles 
per hour. (1 KM = 0.621371 M)
Expected Output:
Input kilometres per hour: 15
9.320568 miles per hour
*/
// Riya Pal
int main() {
    float kmPerHour, milesPerHour;
    printf("Input kilometres per hour: ");
    scanf("%f", &kmPerHour);
    milesPerHour = kmPerHour * 0.621371;
    printf("%.6f miles per hour\n", milesPerHour);
    return 0;
}