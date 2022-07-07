//
//  Task2.c
//  Lesson 2
//
//  Created by Микаэл Мартиросян on 06.07.2022.
//

#include "Task2.h"

/*
 2. Реализовать функцию возведения числа a в степень b:
    a. без рекурсии;
    b. рекурсивно;
    c. *рекурсивно, используя свойство четности степени.
 */


// пункт а – без рекурсии
int powerA(int a, int b) {
    if (b == 0) {
        return 1;
    } else {
        int i = 1;
        
        for (int x = b; x > 0; x--) {
            i *= a;
        }
        
        return i;
    }
}

// пункт b – рекурсивно
int powerB(int a, int b) {
    int res = 1;
    if (b > 0) {
        int value = powerB(a, b - 1);
        res = a * value;
    }
    return res;
}

// пункт с – рекурсивно, используя свойство четности степени
int powerC(int a, int b) {
    int n = 1;
    if (b > 0) {
        if (b % 2 == 0) {
            int value = powerC(a, b / 2);
            return value * value;
        } else {
            return powerC(a, b - 1) * a;
        }
    }
    return n;
}

void task2a(void) {
    int a;
    int b;
    
    printf("----------\nВозведение числа a в степень b без рекурсии\n---------\n");
    
    printf("Введите число: ");
    scanf("%d", &a);
    printf("Введите степень: ");
    scanf("%d", &b);
    
    int result = powerA(a, b);
    printf("Результат: %d\n", result);
}


void task2b(void) {
    int a;
    int b;
    
    printf("----------\nВозведение числа a в степень b рекурсивно\n---------\n");
    
    printf("Введите число: ");
    scanf("%d", &a);
    printf("Введите степень: ");
    scanf("%d", &b);
    
    int result = powerB(a, b);
    printf("Результат: %d\n", result);
}

void task2c(void) {
    int a;
    int b;
    
    printf("----------\nВозведение числа a в степень b рекурсивно, используя свойство четности степени\n---------\n");
    
    printf("Введите число: ");
    scanf("%d", &a);
    printf("Введите степень: ");
    scanf("%d", &b);
    
    int result = powerC(a, b);
    printf("Результат: %d\n", result);
}
