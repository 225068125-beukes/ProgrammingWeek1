#include<stdio.h>
int main(){
    // Declare variables
    double salary = 0.00;
    double totalSalary = 0.00;
    double averageSalary = 0.00;
    double highestSalary = 0.00;
    double lowestSalary = 0.00;
    //1. Ask user for salary
    for(int i = 0; i < 50; i++){
        printf("Enter your salary for employee %d: ", i + 1);
        scanf("%lf", &salary);
        totalSalary += salary;
        if(i == 0){
            highestSalary = salary;
            lowestSalary = salary;
        } else {
            if(salary > highestSalary){
                highestSalary = salary;
            }
            if(salary < lowestSalary){
                lowestSalary = salary;
            }
        }
    }
    //2. Calculate the Average Salary
    averageSalary = totalSalary / 50;
    //3. Display the results
    printf("Total Salary: %.2lf\n", totalSalary);
    printf("Average Salary: %.2lf\n", averageSalary);
    printf("Highest Salary: %.2lf\n", highestSalary);
    printf("Lowest Salary: %.2lf\n", lowestSalary);
    return 0;
}