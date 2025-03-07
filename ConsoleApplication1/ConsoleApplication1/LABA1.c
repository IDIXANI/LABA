#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>

// Функции для прямоугольника
void rectangle(float a, float b) {
    if (a <= 0 || b <= 0) {
        printf("\nОшибка: стороны прямоугольника должны быть положительными!\n");
        return;
    }

    float perimeter = 2 * (a + b);
    float area = a * b;
    float diagonal = sqrt(a * a + b * b);
    printf("\nПрямоугольник:\nПериметр: %.2f\nПлощадь: %.2f\nДиагональ: %.2f\n", perimeter, area, diagonal);
}

// Функции для треугольника
void triangle(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("\nОшибка: стороны треугольника должны быть положительными!\n");
        return;
    }

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("\nОшибка: Такой треугольник не существует!\n");
        return;
    }

    float perimeter = a + b + c;
    float s = perimeter / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    int rovnobedr = (a == b || a == c || b == c);
    printf("\nТреугольник:\nПериметр: %.2f\nПлощадь: %.2f\nРавнобедренный: %s\n", perimeter, area, rovnobedr ? "Да" : "Нет");
}

// Функции для трапеции
void trapezoid(float a, float b, float c, float d) {
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        printf("\nОшибка: стороны и высота трапеции должны быть положительными!\n");
        return;
    }

    float perimeter = a + b + c + d;
    float pp = perimeter / 2;
    float area = sqrt((pp - a) * (pp - b) * (pp - c) * (pp - d));
    float midLine = (a + b) / 2;
 
    printf("\nТрапеция:\nПериметр: %.2f\nПлощадь: %.2f\nСредняя линия: %.2f\n", perimeter, area, midLine);
}

int main() {
    setlocale(LC_ALL, "Rus");
    float a, b, c, d;
    
    // Ввод и расчет параметров для трапеции
    printf("\nВведите основания и боковые стороны трапеции (a b c d): ");
    scanf("%f %f %f %f", &a, &c, &b, &d);
    trapezoid(a, c, b, d);
    setlocale(LC_ALL, "");
    float a, b, c, d;
    // Ввод и расчет параметров для прямоугольника
    printf("Введите стороны прямоугольника (a b): ");
    scanf("%f %f", &a, &b);
    rectangle(a, b);

    // Ввод и расчет параметров для треугольника
    printf("\nВведите стороны треугольника (a b c): ");
    scanf("%f %f %f", &a, &b, &c);
    triangle(a, b, c);

    // Ввод и расчет параметров для трапеции
    printf("\nВведите основания и боковые стороны трапеции (a b c d): ");
    scanf("%f %f %f %f", &a, &c, &b, &d);
    trapezoid(a, c, b, d);
    return 0;
}
