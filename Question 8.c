#include <stdio.h>

/* 
8. WAP in C that takes minutes as input, and display the total 
number of hours and minutes in (HH : MM) format.
Expected Output:
Input total minute: 546
09 : 06 
*/
// Riya Pal
int main() {
    int totalMinutes, hours, minutes;
    printf("Input total minutes: ");
    scanf("%d", &totalMinutes);
    hours = totalMinutes / 60;
    minutes = totalMinutes % 60;
    printf("%02d : %02d\n", hours, minutes);
    return 0;
}