#include<stdio.h>

int main(){

    double revenue = 0.0;
    double expenses = 0.0;
    double mabalance = 0.0;

    printf("MUNICIPAL BUDGET CALCULATOR  ");

    printf("Enter TotalRevenue:");
    scanf("%lf", &revenue);

    printf("Enter Total Expenses:");
    scanf("%lf", &expenses);

    mabalance = revenue - expenses;

    printf("Revenue: %.2f\n", revenue);
    printf("Expenses: %.2f\n", expenses);

    return 0;
}