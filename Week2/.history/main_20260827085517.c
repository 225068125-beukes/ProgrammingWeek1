#include<stdio.h>

int main(){

    float revenue;
    float expenses;
    float balance;

    printf("Enter Revenue:");
    scanf("%f, &revenue");

    printf("Enter Expenses:");
    scanf("%f, &expenses");

    balance = revenue - expenses;

    printf("Revenue: %.2f\n", revenue);
    

    return 0;
}