#include <stdio.h>

int main() {
    char municipality_name[100];
    char mayor_name[100];
    int population;
    
    printf("============================================================\n");
    printf("         MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("============================================================\n");
    printf("\n         Welcome to Windhoek Municipality\n");
    printf("------------------------------------------------------------\n");
    printf("\nPlease enter the following municipal details:\n\n");
    
    printf("Municipality Name: ");
    scanf(" %[^\n]", municipality_name);
    
    printf("Mayor's Name: ");
    scanf(" %[^\n]", mayor_name);
    
    printf("Population: ");
    scanf("%d", &population);
    
    printf("\n============================================================\n");
    printf("         MUNICIPAL INFORMATION REPORT\n");
    printf("============================================================\n");
    printf("\nMunicipality Name: %s\n", municipality_name);
    printf("Mayor's Name: %s\n", mayor_name);
    printf("Population: %d\n", population);
    printf("\n------------------------------------------------------------\n");
    printf("         End of Report\n");
    printf("============================================================\n");
    
    return 0;
}