#include<stdio.h>

int main(){

    float revenue;
    float expenses;
    float mabalance;

    printf("MUNICIPAL BUDGET CALCULATE")

    printf("Enter Revenue:");
    scanf("%f", &revenue);

    printf("Enter Expenses:");
    scanf("%f", &expenses);

    mabalance = revenue - expenses;

    printf("Revenue: %.2f\n", revenue);
    printf("Expenses: %.2f\n", expenses);

    if (mabalance >=0){
        printf("Surplus: %.2f\n", mabalance);
    }else{
        printf("Deficit: %.2f\n", -mabalance);
    }

    return 0;
}