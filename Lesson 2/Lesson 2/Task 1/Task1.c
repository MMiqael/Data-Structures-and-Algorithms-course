//
//  Task1.c
//  Lesson 2
//
//  Created by Микаэл Мартиросян on 03.07.2022.
//

#include "Task1.h"

/*
 1. Реализовать функцию перевода из десятичной системы в двоичную, используя рекурсию.
 */
int i;

int convertToBinary(int decimal) {
    if (decimal == 0) {
        i = 0;
        return i;
    } else {
        i = decimal % 2 + 10 * (convertToBinary(decimal / 2));
        return i;
    }
}

void task1(void) {
    int n;
    
    printf("----------\nПеревод числа из десятичной системы в двоичную\n---------\n");
    
    printf("Введите число: \n");
    scanf("%d", &n);
    
    int result = convertToBinary(n);
    printf("%d\n", result);
}
