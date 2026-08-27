#include<stdio.h>

int main(){

    double revenue;
    double expenses;
    double mabalance;

    printf("MUNICIPAL BUDGET CALCULATOR  ");

    printf("Enter Revenue:");
    scanf("%f", &revenue);

    printf("Enter Expenses:");
    scanf("%f", &expenses);

    mabalance = revenue - expenses;

    printf("Revenue: %.2f\n", revenue);
    printf("Expenses: %.2f\n", expenses);

    return 0;
}