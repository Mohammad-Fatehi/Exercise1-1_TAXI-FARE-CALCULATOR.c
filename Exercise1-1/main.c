#include <stdio.h>
#define many 1.50

/*
 * Mohammad Fatehi
 * Exercise1-1
 */

int main() {
    double kmbefore , kmafter ,fare ,sum;
    printf("TAXI FARE CALCULATOR\n");
    printf("Enter beginning odometer reading=> ");
    scanf(" %lf",&kmbefore);
    printf("Enter ending odometer reading=> ");
    scanf(" %lf",&kmafter);
    sum=kmafter-kmbefore;
    fare= many*sum;
    printf("You traveled a distance of %f miles. At $%f per mile, your fare is $%f",sum ,many,fare);
    return 0;
}
