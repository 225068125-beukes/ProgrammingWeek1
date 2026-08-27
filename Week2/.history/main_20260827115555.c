#include<stdio.h>

int main(){

    float revenue;
    float expenses;
    float mabalance;

    printf("MUNICIPAL BUDGET CALCULATOR ");

    printf("Enter Revenue:");
    scanf("%f", &revenue);

    printf("Enter Expenses:");
    scanf("%f", &expenses);

    mabalance = revenue - expenses;

    printf("Revenue: %.2f\n", revenue);
    printf("Expenses: %.2f\n", expenses);

    return 0;
}