
//
//  testsergay.cpp
//  algoritmday
//
//  Created by Игорь Герасимов on 09.02.2020.
//  Copyright © 2020 Игорь Герасимов. All rights reserved.
//



#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char* argv[]) {
    
    int year, month, day, time;
    int months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    printf("Введите дату больше чем 2000.01.01 но меньше 2101.01.01\n");
    printf("Введите год: \n");

    scanf("%d", &year);
    if (year < 2000 || year > 2100) {
        printf("Смотри документацию");
        return 0;
    };

    printf("Введите месяц: \n");
    scanf("%d", &month);
    if (month < 1 || month > 12) {
        printf("Смотри документацию");
        return 0;
    };

    printf("Введите день: \n");
    scanf("%d", &day);
    if (day < 1 || (months[month - 1] < day && !(year % 4 == 0 && month == 2 && day <= 29))) {
        printf("Смотри документацию");
        return 0;
    };

    time = (year - 2000) * 365 + (year - 2001) / 4 + day - 1;
    
    if (year > 2000) {
        time++;
        for (int i = 0; i < month - 1; i++){
        time += months[i];
        };
    };
    
    if (year % 4 == 0 && month > 2) {
        time++;
    };
    
    printf("Прошло дней %d\n", time);
    time *= 24;
    printf("Прошло часов %d\n", time);

    return 0;
};

