#include <stdio.h>

double num1 = 0;
double num2 = 0;

void input_bilangan(void);
void tambah(void);
void kurang(void);
void kali(void);
void bagi(void);

int main()
{
    char op, lanjut;

    do
    {
        input_bilangan();

        printf("Pilih operasi (+  x  -  /) : ");
        scanf(" %c", &op);

        switch (op)
        {
        case '+':
            tambah();
            break;
        case 'x':
        case 'X':
        case '*':
            kali();
            break;
        case '-':
            kurang();
            break;
        case '/':
            bagi();
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

void input_bilangan(void)
{
    printf("Masukkan bilangan pertama : ");
    scanf("%lf", &num1);
    printf("Masukkan bilangan kedua   : ");
    scanf("%lf", &num2);
}

void tambah(void)
{
    printf("Hasil: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
}

void kurang(void)
{
    printf("Hasil: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
}

void kali(void)
{
    printf("Hasil: %.2f x %.2f = %.2f\n", num1, num2, num1 * num2);
}

void bagi(void)
{
    if (num2 == 0)
        printf("Error: pembagian dengan nol tidak diperbolehkan.\n");
    else
        printf("Hasil: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
}
