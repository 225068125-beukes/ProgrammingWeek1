#include<stdio.h>

int main(){

    double revenue;
    double expenses;
    double balance;

    printf("Enter Revenue:");
    scanf("%f, &revenue");

    printf("Enter Expenses:");
    scanf("%lf, &expenses");

    balance = revenue - expenses;

    printf("Budget balance: %.2f\n", balance);

    return 0;
}