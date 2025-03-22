#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>

// ������� ��� ��������������
void rectangle(float a, float b) {
    if (a <= 0 || b <= 0) {
        printf("\n������: ������� �������������� ������ ���� ��������������!\n");
        return;
    }

    float perimeter = 2 * (a + b);
    float area = a * b;
    float diagonal = sqrt(a * a + b * b);
    printf("\n�������������:\n��������: %.2f\n�������: %.2f\n���������: %.2f\n", perimeter, area, diagonal);
}

// ������� ��� ������������
void triangle(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("\n������: ������� ������������ ������ ���� ��������������!\n");
        return;
    }

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("\n������: ����� ����������� �� ����������!\n");
        return;
    }

    float perimeter = a + b + c;
    float s = perimeter / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    int rovnobedr = (a == b || a == c || b == c);
    printf("\n�����������:\n��������: %.2f\n�������: %.2f\n��������������: %s\n", perimeter, area, rovnobedr ? "��" : "���");
}

// ������� ��� ��������
void trapezoid(float a, float b, float c, float d) {
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        printf("\n������: ������� � ������ �������� ������ ���� ��������������!\n");
        return;
    }

    float perimeter = a + b + c + d;
    float pp = perimeter / 2;
    float area = sqrt((pp - a) * (pp - b) * (pp - c) * (pp - d));
    float midLine = (a + b) / 2;

    printf("\n��������:\n��������: %.2f\n�������: %.2f\n������� �����: %.2f\n", perimeter, area, midLine);
}

int main() {
    setlocale(LC_ALL, "Rus");
    float a, b, c, d;

    // ���� � ������ ���������� ��� ��������
    printf("\n������� ��������� � ������� ������� �������� (a b c d): ");
    scanf("%f %f %f %f", &a, &c, &b, &d);
    trapezoid(a, c, b, d);
    setlocale(LC_ALL, "");
    float a, b, c, d;
    // ���� � ������ ���������� ��� ��������������
    printf("������� ������� �������������� (a b): ");
    scanf("%f %f", &a, &b);
    rectangle(a, b);

    // ���� � ������ ���������� ��� ������������
    printf("\n������� ������� ������������ (a b c): ");
    scanf("%f %f %f", &a, &b, &c);
    triangle(a, b, c);

    // ���� � ������ ���������� ��� ��������
    printf("\n������� ��������� � ������� ������� �������� (a b c d): ");
    scanf("%f %f %f %f", &a, &c, &b, &d);
    trapezoid(a, c, b, d);
    return 0;
}