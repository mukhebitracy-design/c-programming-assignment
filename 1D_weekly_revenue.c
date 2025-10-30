/*
Tracy Nekesa
PAG106/G/28737/25
1Darray
*/

#include <stdio.h>
//1D array for a week
int main() {
    float revenue[7];  
    float total = 0;
    float average;
    int i;

    printf("Enter revenue for each day:\n");

    for(i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &revenue[i]);   
        total += revenue[i];        
    }
//calculate average revenue
average=total/7;


    printf("\nTotal revenue for the week = %.2f\n", total);
    printf("average daily revenue=%.2f\n",average);

    return 0;
}


