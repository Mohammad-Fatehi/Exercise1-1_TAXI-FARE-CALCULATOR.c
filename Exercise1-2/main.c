#include <stdio.h>
#define hour_per_min 60
/*
 * Mohammad Fatehi
 * Exercise1-2
 */


int main() {
    double hour , min ,hour_whit_min ,suntigrad;
    printf("How many hours have passed : ");
    scanf(" %lf", &hour);
    printf("How many minutes have passed : ");
    scanf(" %lf", &min);
    hour_whit_min=(min/hour_per_min)+hour;
    printf("The whole time the freezer was on : %f \n",hour_whit_min);
    suntigrad=((4*(hour_whit_min*hour_whit_min))/(hour_whit_min+2))-20;
    printf("Temperature inside the freezer in degrees Celsius: %f ",suntigrad);

    return 0;
}
