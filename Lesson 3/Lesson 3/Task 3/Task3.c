//
//  Task3.c
//  Lesson 3
//
//  Created by Микаэл Мартиросян on 09.07.2022.
//

#include "Task1.h"
#include "Task3.h"
#include <stdio.h>
#include <stdlib.h>

/*
 3. Реализовать бинарный алгоритм поиска в виде функции, которой передается отсортированный массив. Функция возвращает индекс найденного элемента или -1, если элемент не найден.
 */

int binarySort(int *array, int size, int lhs, int rhs, int m, int value) {
    while ((lhs <= rhs) && (array[m] != value))  {
        if (array[m] < value) {
            lhs = m + 1;
        } else {
            rhs = m - 1;
        }
        
        m = lhs + (rhs - lhs) / 2;
        binarySort(array, size, lhs, rhs, m, value);
    }
    
    if (array[m] == value) {
        return array[m];
    } else {
        return -1;
    }
}

void task3(void) {
    int size = 100;
    int array[size];
    int value;
        
    for (int i = 0; i < size; i++) {
        array[i] = arc4random_uniform(200);
    }
    
    optimized(array, size);
    
    int lhs = array[0];
    int rhs = array[size - 1];
    int m = lhs + (rhs - lhs) / 2;
    
    for (int i = 0; i < size; i++) {
        if (i == size - 1) {
            printf("%d\n", array[i]);
        } else {
            printf("%d, ", array[i]);
        }
    }
    
    printf("Введите число от 0 до 200: ");
    scanf("%d", &value);
    
    int result = binarySort(array, size, lhs, rhs, m, value);
    
    printf("%d\n", result);
}

