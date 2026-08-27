#include<stdio.h>
int main(){
    double revenue;
    double expenses;
    double balance;
    printf("Enter Revenue:);
    scanf("%lf, &revenue");
    printf("Enter Expenses: %.2f\n");
    scanf("%lf, &expenses");
    balance= revenue-expenses;
    printf("Budget balance: %.2f\n", balance);
    return 0;
}