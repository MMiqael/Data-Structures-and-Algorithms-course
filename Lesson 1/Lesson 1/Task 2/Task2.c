//
//  Task2.c
//  Lesson 1
//
//  Created by Микаэл Мартиросян on 03.07.2022.
//

#include "Task2.h"

/*
 2. Найти максимальное из четырех чисел. Массивы не использовать.
 */

int maxNubmer(int a, int b, int c) {
    if (a > b) {
        if (a > c) {
            return a;
        } else {
            return c;
        }
    } else if (b > c) {
        return b;
    } else {
        return c;
    }
}

void task2(void) {
    
    int a;
    int b;
    int c;
    
    printf("\n__________\nНахождение максимального числа\n----------\n");
    
    printf("Введите три числа: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    int maxNumber = maxNubmer(a, b, c);
    
    printf("Максимальное число: %d", maxNumber);
}
