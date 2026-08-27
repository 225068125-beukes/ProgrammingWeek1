#include<stdio.h>

int main(){

    double revenue = 0.0;
    double expenses = 0.0;
    double balance = 0.;

    printf("MUNICIPAL BUDGET CALCULATOR\n");

    printf("Enter TotalRevenue:");
    scanf("%lf", &revenue);

    printf("Enter Total Expenses:");
    scanf("%lf", &expenses);

    balance = revenue - expenses;

    printf("Revenue: %.2lf\n", revenue);
    printf("Expenses: %.2lf\n", expenses);
    printf("Balance: %.2lf\n", balance);

    return 0;
}