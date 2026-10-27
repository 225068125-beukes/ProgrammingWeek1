#include <stdio.h>
#include "employee.h"
#include "budget.h"
#include "utilities.h"


void employeeReport(int employees[], int length){
    printf("-------Employee Report--------\n");
    printf("These are the employees\n");
    listEmployees(employees, length);
}

void budgetReport(float budgets[], int length){
    printf("-------Budget Report--------\n");
    printf("The total budget is: %.2f\n", calculateBudget(budgets, length));
}