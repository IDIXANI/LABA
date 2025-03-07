#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>

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

int main() {
    setlocale(LC_ALL, "");
    float a, b, c, d;

    // Ввод и расчет параметров для треугольника
    printf("\nВведите стороны треугольника (a b c): ");
    scanf("%f %f %f", &a, &b, &c);
    triangle(a, b, c);
    return 0;
}
