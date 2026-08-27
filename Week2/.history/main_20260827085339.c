#include<stdio.h>

int main(){

    float revenue;
    float expenses;
    flo balance;

    printf("Enter Revenue:");
    scanf("%f, &revenue");

    printf("Enter Expenses:");
    scanf("%f, &expenses");

    balance = revenue - expenses;

    printf("Budget balance: %.2f\n", balance);

    return 0;
}