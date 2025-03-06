#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>
// ������� ��� ������������
void triangle(float a, float b, float c) {
    if (a + b <= c  a + c <= b  b + c <= a) {
        printf("\n������: ����� ����������� �� ����������!\n");
        return;
    }
    float perimeter = a + b + c;
    float s = perimeter / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    int isIsosceles = (a == b  a == c  b == c);
    printf("\n�����������:\n��������: %.2f\n�������: %.2f\n��������������: %s\n", perimeter, area, isIsosceles ? "��" : "���");
}

// ������� ��� ��������
void trapezoid(float a, float b, float c, float d, float h) {
    float perimeter = a + b + c + d;
    float area = ((a + b) / 2) * h;
    float midLine = (a + b) / 2;
    printf("\n��������:\n��������: %.2f\n�������: %.2f\n������� �����: %.2f\n", perimeter, area, midLine);
}

int main() {
    setlocale(LC_ALL, "");
    float a, b, c, d, h;

    // ���� � ������ ���������� ��� ������������
    printf("\n������� ������� ������������ (a b c): ");
    scanf("%f %f %f", &a, &b, &c);
    triangle(a, b, c);

    // ���� � ������ ���������� ��� ��������
    printf("\n������� ��������� � ������� ������� �������� (a b c d) � ������ h: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &h);
    trapezoid(a, b, c, d, h);

    return 0;
}