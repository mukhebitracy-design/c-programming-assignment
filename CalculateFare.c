/*

// name: Tracy Nekesa
// reg: PA106/G/28737/25
*/
#include<stdio.h>

// calculation of fare
// declared variables: distanceInKilometre, fareInKsh
// ksh50 = one kilometre

int main() {
    float distanceInKilometre, fareInKsh;

    printf("Enter distance in kilometre: ");
    scanf("%f", &distanceInKilometre);

    fareInKsh = distanceInKilometre * 50;

    printf("Fare in shillings: %.2f\n", fareInKsh);

    return 0;
}
