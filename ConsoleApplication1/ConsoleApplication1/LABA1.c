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

int main() {
    setlocale(LC_ALL, "");
    float a, b, c, d;

    // Ввод и расчет параметров для треугольника
    printf("\nВведите стороны треугольника (a b c): ");
    scanf("%f %f %f", &a, &b, &c);
    triangle(a, b, c);
    return 0;
}
