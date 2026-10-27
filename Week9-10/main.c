#include<stdio.h>
#include "employee.h"
#include "budget.h"
#include "utilities.h"
#include "reports.h"
#include "main.h"

void employeeMenu(int arr[], int lenght){
    printf("1. Add Employee\n2. List Employees\n3. Search Employee\n");
    int choice = readINT();
    if(choice == 1){
        printf("Enter Employee ID: ");
        int num = readINT();
        addEmployee(num, arr, lenght);
    }
    if(choice == 2){
        printf("Enter the ID you want to search: ");
        int num = readINT();
        printf("Index Result: %d", searchEmployee(num, arr, lenght));
    }
}

void budgetMenu(float budgets[], int lenght){
    printf("1. View Total Salary Budget\n2. View Department Budget\n3. Back to Main Menu\n");
    int choice = readINT();
    if(choice == 1){
        printf("Total Salary Budget: %.2f\n", calculateBudget(budgets, lenght));
    }
    if(choice == 2){
        printf("Department Budget: %.2f\n", calculateBudget(budgets, lenght));
    }
}

void ReportMenu(int arr[], int lenght){
    printf("1. Generate Full Employee Report\n2. Generate Budget Report\n3. Back to Main Menu\n");
    int choice = readINT();
    if(choice == 1){
        printf("Printing all employee profiles to employee_report.txt\n");
        employeeReport(arr, lenght);
    }else if(choice == 2){
        printf("----FINANCIAL REPORT INVOICE----\n");
    }
}

void displayMenu(int arr[], float budgets[], int lenght){
    printf("Choose an options 1-4\n\n");
    printf("1. Employee\n2. Budget\n3. Reports\n4. Exit\n");
    int choice = readINT();
    if(choice == 1){employeeMenu(arr, lenght);}
    if(choice == 2){budgetMenu(budgets, lenght);}
    if(choice == 3){ReportMenu(arr, lenght);}
    if(choice == 4){printf("Exiting...\n");}
}

int main(){
    int arr[100];
    float budgets[100];
    int lenght = 0;
    displayMenu(arr, budgets, lenght);
    return 0;
}