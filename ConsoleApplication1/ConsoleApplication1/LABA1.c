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
// ������� ��� ��������
//void trapezoid(float a, float b, float c, float d, float h) {
//    float perimeter = a + b + c + d;
//    float area = ((a + b) / 2) * h;
//    float midLine = (a + b) / 2;
//    printf("\n��������:\n��������: %.2f\n�������: %.2f\n������� �����: %.2f\n", perimeter, area, midLine);
//}

int main() {
    float a, b, c, d, h;

    //// ���� � ������ ���������� ��� ��������
    //printf("\n������� ��������� � ������� ������� �������� (a b c d) � ������ h: ");
    //scanf("%f %f %f %f %f", &a, &b, &c, &d, &h);
    //trapezoid(a, b, c, d, h);
    // Ввод и расчет параметров для прямоугольника
    printf("Введите стороны прямоугольника (a b): ");
    scanf("%f %f", &a, &b);
    rectangle(a, b);

    return 0;
}