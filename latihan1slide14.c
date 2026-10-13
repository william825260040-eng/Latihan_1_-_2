#include <stdio.h>

double tambah(double a, double b);
double kurang(double a, double b);
double kali(double a, double b);
double bagi(double a, double b);

int main()
{
    double num1, num2;
    char op, lanjut;

    do
    {
        printf("Masukkan bilangan pertama : ");
        scanf("%lf", &num1);
        printf("Masukkan bilangan kedua   : ");
        scanf("%lf", &num2);

        printf("Pilih operasi (+  x  -  /) : ");
        scanf(" %c", &op);

        switch (op)
        {
        case '+':
            printf("Hasil: %.2f + %.2f = %.2f\n", num1, num2, tambah(num1, num2));
            break;
        case 'x':
        case 'X':
        case '*':
            printf("Hasil: %.2f x %.2f = %.2f\n", num1, num2, kali(num1, num2));
            break;
        case '-':
            printf("Hasil: %.2f - %.2f = %.2f\n", num1, num2, kurang(num1, num2));
            break;
        case '/':
            if (num2 == 0)
                printf("Error: pembagian dengan nol tidak diperbolehkan.\n");
            else
                printf("Hasil: %.2f / %.2f = %.2f\n", num1, num2, bagi(num1, num2));
            break;
        default:
            printf("Operasi tidak valid.\n");
        }

        printf("\nHitung lagi? (y/n) : ");
        scanf(" %c", &lanjut);
        printf("\n");
    } while (lanjut == 'y' || lanjut == 'Y');

    printf("Program selesai.\n");
    return 0;
}

double tambah(double a, double b) { return a + b; }
double kurang(double a, double b) { return a - b; }
double kali(double a, double b)   { return a * b; }
double bagi(double a, double b)   { return a / b; }
