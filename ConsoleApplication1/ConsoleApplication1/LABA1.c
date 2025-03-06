#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>


// Ôóíęöčč äë˙ ňđŕďĺöčč
void trapezoid(float a, float b, float c, float d, float h) {
    float perimeter = a + b + c + d;
    float area = ((a + b) / 2) * h;
    float midLine = (a + b) / 2;
    printf("\nŇđŕďĺöč˙:\nĎĺđčěĺňđ: %.2f\nĎëîůŕäü: %.2f\nŃđĺäí˙˙ ëčíč˙: %.2f\n", perimeter, area, midLine);
}

int main() {
    setlocale(LC_ALL, "Rus");
    float a, b, c, d, h;

    // Ââîä č đŕń÷ĺň ďŕđŕěĺňđîâ äë˙ ňđŕďĺöčč
    printf("\nÂâĺäčňĺ îńíîâŕíč˙ č áîęîâűĺ ńňîđîíű ňđŕďĺöčč (a b c d) č âűńîňó h: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &h);
    trapezoid(a, b, c, d, h);

    return 0;
}
