//
//  Task4.c
//  Lesson 1
//
//  Created by Микаэл Мартиросян on 03.07.2022.
//

#include "Task4.h"
#include <math.h>

/*
 4. Написать программу нахождения корней заданного квадратного уравнения.
 */

int descriminant(int a, int b, int c) {
    return pow(b, 2) - (4 * a * c);
}

void task4(void) {
    
    int a;
    int b;
    int c;
    
    printf("\n__________\nНахождение корней квадратного уравнения\n----------\n");
    
    printf("Введите три числа: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    int d = descriminant(a, b, c);
    
    if (d < 0) {
        printf("Нет корней");
    } else if (d == 0) {
        int x = -(b / (2 * a));
        printf("Корень уравнения равен %d", x);
    } else if (d > 0) {
        int x1 = (-b + sqrt(d)) / (2 * a);
        int x2 = (-b - sqrt(d)) / (2 * a);
        printf("Уравнение имеет два корня:\nx1 = %d\nx2 = %d", x1, x2);
    }
    
    printf("\n");
}
