//
//  Task2.c
//  Lesson 3
//
//  Created by Микаэл Мартиросян on 09.07.2022.
//

#include "Task2.h"
#include <stdlib.h>

/*
 2. *Реализовать шейкерную сортировку.
 */

void swapElements(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void shakerSort(int *array, int from, int to) {
    if (from == to) { return; }
    if (from < to) {
        for (int i = from; i < to - 1; i++) {
            if (array[i] > array[i + 1]) {
                swapElements(&array[i], &array[i + 1]);
            }
        }
    } else {
        for (int i = from; i > to; i--) {
            if (array[i] < array[i - 1]) {
                swapElements(&array[i], &array[i - 1]);
            }
        }
    }
}

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        if (i == size - 1) {
            printf("%d\n\n", array[i]);
        } else {
            printf("%d, ", array[i]);
        }
    }
}

void task2(void) {
    int size = 100;
    int array[size];
    
    for (int i = 0; i < size; i++) {
        array[i] = arc4random_uniform(size);
    }
    
    printf("Array before sort:\n");
    printArray(array, size);
    
    int left = 0;
    int right = size;
        
    while (1 == 1) {
        if (left >= right) { break; }
        shakerSort(array, left, right);
        right--;
        if (left >= right) { break; }
        shakerSort(array, right, left);
        left++;
    }
    
    printf("\n\n");
    
    printf("Array after sort:\n");
    printArray(array, size);
}
