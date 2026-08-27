#include<stdio.h>

int main(){

    float revenue;
    float expenses;
    float maalance;

    printf("Enter Revenue:");
    scanf("%f, &revenue");

    printf("Enter Expenses:");
    scanf("%f, &expenses");

    balance = revenue - expenses;

    printf("Revenue: %.2f\n", revenue);
    printf("Expenses: %.2f\n", expenses);

    if (balance >=0){
        printf("Surplus: %.2f\n", balance)
    }

    return 0;
}