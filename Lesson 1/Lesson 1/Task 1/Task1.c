//
//  Task1.c
//  Lesson 1
//
//  Created by Микаэл Мартиросян on 03.07.2022.
//

#include "Task1.h"
#include <math.h>

/*
 1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где m-масса тела в килограммах, h - рост в метрах.
 */

int bodyMassIndex(float weight, float height) {
    return weight / (pow(height, 2));
}

void task1(void) {
    float weight;
    float height;
    
    printf("__________\nВычисление индекса массы тела\n----------\n");
    
    printf("Введите массу тела в кг: ");
    scanf("%f", &weight);
    
    if (weight > 30 && weight < 150) {
        printf("Введите рост в метрах: ");
        scanf("%f", &height);
    } else {
        while (weight < 30 || weight > 150) {
            printf("Вы ввели некорректное значение. Попробуйте еще раз: ");
            scanf("%f", &weight);
        }
    }
    
    while (height < 1.2 || height > 2.5) {
        printf("Вы ввели некорректное значение. Попробуйте еще раз: ");
        scanf("%f", &height);
    }
    
    float bmi = bodyMassIndex(weight, height);
    
    printf("Индекс массы тела составляет %.2f", bmi);
}
