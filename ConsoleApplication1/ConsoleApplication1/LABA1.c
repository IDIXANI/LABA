#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>

// Функции для трапеции
void trapezoid(float a, float b, float c, float d, float h) {
    float perimeter = a + b + c + d;
    float area = ((a + b) / 2) * h;
    float midLine = (a + b) / 2;
    printf("\nТрапеция:\nПериметр: %.2f\nПлощадь: %.2f\nСредняя линия: %.2f\n", perimeter, area, midLine);
}

int main() {
    setlocale(LC_ALL, "");
    float a, b, c, d, h;

    // Ввод и расчет параметров для трапеции
    printf("\nВведите основания и боковые стороны трапеции (a b c d) и высоту h: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &h);
    trapezoid(a, b, c, d, h);

    return 0;
}