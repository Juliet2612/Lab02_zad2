#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main(int argc, char* argv[])
{
    fflush(stdout);
    fflush(stdin);
    SetConsoleOutputCP(CP_UTF8);

    int a, b, wynik1;
    double x, y, wynik2;
    puts("Operacje arytmetyczne na liczbach typu 'int'");
    printf("Podaj dwie liczby typu int oddzielone spacją: ");
    fflush(stdin);
    scanf("%d%d", &a, &b);

    wynik1 = a + b;
    printf("%d %c %d = %d\n", a, '+',b, wynik1);
    wynik1 = a - b;
    printf("%d %c %d = %d\n", a, '-',b, wynik1);
    wynik1 = a * b;
    printf("%d %c %d = %d\n", a, '*',b, wynik1);

    if (b !=0);
    {
        wynik1 = a / b;
        printf("%d %c %d = %d\n", a, '/',b, wynik1);
        wynik1 = a % b;
        printf("%d %c %d = %d\n", a, '%', b, wynik1);
    }
    puts("\nOperacje arytmetyczne na liczbach typu 'double'");
    printf("Podaj dwie liczby typu double oddzielone spacją: ");
    fflush(stdin);

    scanf("%lf%lf", &x, &y);
    wynik2 = x + y;
    printf("%.6lf + %.6lf = %lf\n", x, y, wynik2);
    wynik2 = x - y;
    printf("%.6lf - %.6lf = %lf\n", x, y, wynik2);
    wynik2 = x * y;
    printf("%.6lf * %.6lf = %lf\n", x, y, wynik2);
    wynik2 = x / y;
    printf("%.6lf / %.6lf = %f\n", x, y, wynik2);

    system("pause");
    return 0;
}