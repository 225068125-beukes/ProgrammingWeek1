#include <stdio.h>

void addEmployee(int id, int arr[], int index){
        arr[index] = id;
    }


void listEmployees(int employees[], int size){
    for(int i = 0; i < size; i++){
        printf("Employee ID: %d\n", employees[i]);
    }
}

int searchEmployee(int searchID, int employees[], int size){
    for(int i = 0; i < size; i++){
        if(employees[i] == searchID){
            return i;
        }
    }
    return -1;
}