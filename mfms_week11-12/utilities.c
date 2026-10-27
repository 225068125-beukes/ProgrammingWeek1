#include <stdio.h>
#include "utilities.h"

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

void printString(char word[]){
    printf("%s", word);
}