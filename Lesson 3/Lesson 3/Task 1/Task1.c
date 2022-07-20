//
//  Task1.c
//  Lesson 3
//
//  Created by Микаэл Мартиросян on 07.07.2022.
//

#include "Task1.h"
#include <stdlib.h>

/*
 1. Попробовать оптимизировать пузырьковую сортировку. Сравнить количество операций сравнения оптимизированной и не оптимизированной программы. Написать функции сортировки, которые возвращают количество операций.
 */

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void print(int N, int *a) {
    for (int i = 0; i < N; i++) {
        if (i == 0) {
            printf("%d", a[i]);
        } else {
            printf(", %d", a[i]);
        }
    }
}

void doubleLineBreak(void) {
    printf("\n\n");
}

int notOptimized(int *array, int size) {
    int countOfOperations = 0;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
            countOfOperations++;
        }
    }
    return countOfOperations;
}

int optimized(int *array, int size) {
    int countOfOperations = 0;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
            countOfOperations++;
        }
    }
    return countOfOperations;
}

void task1(void) {
    int size = 100;
    int arrayOne[size];
    int arrayTwo[size];
    
    for (int i = 0; i < size; i++) {
        arrayOne[i] = arc4random_uniform(size);
    }
    
    for (int i = 0; i < size; i++) {
        arrayTwo[i] = arrayOne[i];
    }
    
    printf("ArrayOne before sort:\n");
    print(size, arrayOne);
    doubleLineBreak();
    
    printf("ArrayTwo before sort:\n");
    print(size, arrayTwo);
    doubleLineBreak();
    
    int countOfNotOptimizedOperations = notOptimized(arrayOne, size);
    int countOfOptimizedOperations = optimized(arrayTwo, size);

    printf("ArrayOne after sort:\n");
    print(size, arrayOne);
    doubleLineBreak();
    
    printf("ArrayTwo after sort:\n");
    print(size, arrayTwo);
    doubleLineBreak();
    
    printf("Количество операций неоптимизированной сортировки равно %d\n", countOfNotOptimizedOperations);
    printf("Количество операций оптимизированной сортировки равно %d", countOfOptimizedOperations);
    
    doubleLineBreak();
    
    if (countOfOptimizedOperations < countOfNotOptimizedOperations) {
        printf("Оптимизированная сортировка имеет лучшую производительность");
    } else if (countOfOptimizedOperations < countOfNotOptimizedOperations) {
        printf("Неоптимизированная сортировка имеет лучшую производительность");
    } else if (countOfOptimizedOperations == countOfNotOptimizedOperations) {
        printf("Производительность обеих сортировок одинаковая");
    }
    
    doubleLineBreak();
}
