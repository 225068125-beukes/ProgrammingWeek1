#ifndef BUDGET_H
#define BUDGET_H
#include "records.h"

void addBudget(Budget budgets[], int length, char dept[], double allocated, double spent);
float calculateTotalBudget(Budget budgets[], int length);

#endif