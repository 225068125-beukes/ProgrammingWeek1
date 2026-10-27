#include <stdio.h>
#include <string.h>

/* =========================================
   1. HEADERS & STRUCTS (from records.h)
   ========================================= */
#define MAX_RECORDS 100

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    int id;
    char name[30];
    char department[20];
    double salary;
} Employee;

typedef struct {
    char department[20];
    double allocated;
    double spent;
} Budget;

/* =========================================
   2. UTILITIES (from utilities.c)
   ========================================= */
int readINT(){
    int num=0;
    scanf("%d", &num);
    return num;
}

double readDouble(){
    double num=0;
    scanf("%lf", &num);
    return num;
}

/* =========================================
   3. BUDGET FUNCTIONS (from budget.c)
   ========================================= */
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

/* =========================================
   4. GLOBAL ARRAYS
   ========================================= */
Employee employees[MAX_RECORDS];
int employeeCount = 0;

Budget budgets[MAX_RECORDS];
int budgetCount = 0;

/* =========================================
   5. POINTER FUNCTIONS
   ========================================= */
void updateSalary(Employee *e, double newSalary) {
    e->salary = newSalary; 
}

Employee *findEmployee(Employee list[], int n, int id) {
    for (int i = 0; i < n; i++) {
        if (list[i].id == id) {
            return &list[i]; 
        }
    }
    return NULL; 
}

/* =========================================
   6. EMPLOYEE FUNCTIONS
   ========================================= */
void addEmployee() {
    if (employeeCount >= MAX_RECORDS) {
        printf("Error: Database full!\n");
        return;
    }
    printf("Enter Employee ID: ");
    employees[employeeCount].id = readINT();
    
    printf("Enter Name (one word): ");
    scanf("%29s", employees[employeeCount].name);
    
    printf("Enter Department (one word): ");
    scanf("%19s", employees[employeeCount].department);
    
    printf("Enter Salary: N$");
    employees[employeeCount].salary = readDouble();
    
    employeeCount++;
    printf("Employee added!\n");
}

void displayEmployees() {
    if (employeeCount == 0) {
        printf("No employees to display.\n");
        return;
    }
    printf("\n%-6s %-15s %-15s %12s\n", "ID", "Name", "Department", "Salary");
    printf("----------------------------------------------------\n");
    for (int i = 0; i < employeeCount; i++) {
        printf("%-6d %-15s %-15s N$%10.2f\n", 
               employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
    }
}

void updateEmployeeMenu() {
    printf("Enter the ID of the employee to update: ");
    int searchId = readINT();
    
    Employee *found = findEmployee(employees, employeeCount, searchId);
    
    if (found != NULL) {
        printf("Current Salary: N$%.2f\n", found->salary);
        printf("Enter new salary: N$");
        double newSal = readDouble();
        updateSalary(found, newSal); 
        printf("Salary updated successfully!\n");
    } else {
        printf("Employee with ID %d not found.\n", searchId);
    }
}

void employeeMenu() {
    int choice = 0;
    while (choice != 4) {
        printf("\n--- Employee Menu ---\n");
        printf("1. Add Employee\n2. List Employees\n3. Update Employee Salary\n4. Back to Main Menu\n");
        choice = readINT();
        
        if (choice == 1) addEmployee();
        if (choice == 2) displayEmployees();
        if (choice == 3) updateEmployeeMenu();
    }
}

/* =========================================
   7. BUDGET MENU
   ========================================= */
void budgetMenu() {
    int choice = 0;
    while (choice != 3) {
        printf("\n--- Budget Menu ---\n");
        printf("1. Add Budget\n2. View Total Budget\n3. Back to Main Menu\n");
        choice = readINT();
        
        if (choice == 1) {
            char dept[20];
            double alloc, spent;
            printf("Enter Department: ");
            scanf("%19s", dept);
            printf("Enter Allocated Amount: ");
            alloc = readDouble();
            printf("Enter Spent Amount: ");
            spent = readDouble();
            
            addBudget(budgets, budgetCount, dept, alloc, spent);
            budgetCount++;
            printf("Budget added!\n");
        }
        if (choice == 2) {
            printf("Total Allocated Budget: N$%.2f\n", calculateTotalBudget(budgets, budgetCount));
        }
    }
}

/* =========================================
   8. MAIN
   ========================================= */
int main() {
    int choice = 0;
    while (choice != 3) {
        printf("\n===== MFMS MAIN MENU =====\n");
        printf("1. Employee Management\n");
        printf("2. Budget Management\n");
        printf("3. Exit\n");
        printf("Choose an option: ");
        
        choice = readINT();
        
        if (choice == 1) {
            employeeMenu();
        } else if (choice == 2) {
            budgetMenu();
        } else if (choice == 3) {
            printf("Exiting... Goodbye!\n");
        } else {
            printf("Invalid choice.\n");
        }
    }
    return 0;
}