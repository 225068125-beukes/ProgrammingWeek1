#include<stdio.h>

int main(){

    double revenue = 0;
    double expenses = 0;
    double balance = 0;
    int departments = 0;
    double payroll = 0;
    double procurement = 0;
    double assets = 0;


    printf("MUNICIPAL BUDGET CALCULATOR\n");

    printf("Enter TotalRevenue:");
    scanf("%lf", &revenue);

    printf("Enter Total Expenses:");
    scanf("%lf", &expenses);

    printf("Enter Number of Departments:");
    scanf("%d", &departments);

    printf("Enter Total Payroll:");
    scanf("%lf", &payroll);

    printf("Enter Total Procurement:");
    scanf("%lf", &procurement);

    printf("Enter Total Assets:");
    scanf("%lf", &assets);

    balance = revenue - expenses;

    printf("Revenue: %.2lf\n", revenue);
    printf("Expenses: %.2lf\n", expenses);
    printf("Balance: %.2lf\n", balance);
    printf("Number of Departments: %d\n", departments);
    printf("Total Payroll: %.2lf\n", payroll);
    printf("Total Procurement: %.2lf\n", procurement);
    printf("Total Assets: %.2lf\n", assets);
    
    return 0;
}