#include <stdio.h>
#include <string.h>
#include "budget.h"

void addBudget(Budget budgets[], int length, char dept[], double allocated, double spent) {
    strcpy(budgets[length].department, dept);
    budgets[length].allocated = allocated;
    budgets[length].spent = spent;
}

float calculateTotalBudget(Budget budgets[], int length) {
    float sum = 0;
    for(int i = 0; i < length; i++){
        sum += budgets[i].allocated;
    }
    return sum;
}