#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>

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

    return 0;
}
