#include<stdio.h>

int main(){

    double revenue = 0.0;
    double expenses = 0.0;
    double mabalance = 0.0;

    printf("MUNICIPAL BUDGET CALCULATOR  ");

    printf("Enter TotalRevenue:");
    scanf("%f", &revenue);

    printf("Enter Total Expenses:");
    scanf("%f", &expenses);

    mabalance = revenue - expenses;

    printf("Revenue: %.2f\n", revenue);
    printf("Expenses: %.2f\n", expenses);

    return 0;
}