#include<stdio.h>

void addBudget(float amount, float budgets[], int lenght){
        budgets[lenght] = amount;
    }

float calculateBudget(float budgets[], int length){
    float sum = 0;
    for(int i = 0; i < length; i++){
        sum += budgets[i];
    }
    return sum;
}
