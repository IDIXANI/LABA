#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>

// Функции для прямоугольника
void rectangle(float a, float b) {
    float perimeter = 2 * (a + b);
    float area = a * b;
    float diagonal = sqrt(a * a + b * b);
    printf("\nПрямоугольник:\nПериметр: %.2f\nПлощадь: %.2f\nДиагональ: %.2f\n", perimeter, area, diagonal);
}

int main() {
    setlocale(LC_ALL, "Rus");
    float a, b, c, d, h;

    // Ввод и расчет параметров для прямоугольника
    printf("Введите стороны прямоугольника (a b): ");
    scanf("%f %f", &a, &b);
    rectangle(a, b);

    return 0;
}