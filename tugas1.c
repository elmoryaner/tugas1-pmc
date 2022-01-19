// Nama: Elmo Ryaner Panggabean
// NIM : 13220012
// Program Water Jug

#include <stdio.h>
#include <stdlib.h>
#define max(x, y) (((x) > (y)) ? (x) : (y))
#define min(x, y) (((x) < (y)) ? (x) : (y))

int main()
{
    // Kamus
    int a = 0, b = 0, x = 3, y = 5, temp1, temp2;

    printf("Water Jug Problem\n");

    // Instruksi
    printf("Instruksi:\n");
    printf("1. isi penuh jug A\n");
    printf("2. isi penuh jug B\n");
    printf("3. tuangkan isi jug A ke jug B\n");
    printf("4. tuangkan isi jug B ke jug A\n");
    printf("5. kosongkan jug A\n");
    printf("6. kosongkan jug B\n");
    printf("jug A = %d\n", a);
    printf("jug B = %d\n", b);

    // Program mengulang sampai mendapatkan 4 liter
    while (b != 4)
    {
        int step;

        // User menginput instruksi yang diinginkan
        printf("Masukkan instruksi: ");
        scanf("%d", &step);


        switch(step)
        {
        case 1:
            if (a < 3)
            {
                a = x;
            }
            break;

        case 2:
            if (b < 5)
            {
                b = y;
            }
            break;

        case 3:
            if (a > 0)
            {
                temp1 = max(0, a + b - y);
                temp2 = min(a + b, y);
                a = temp1;
                b = temp2;
            }
            break;

        case 4:
            if (b > 0)
            {
                temp1 = min(a + b, x);
                temp2 = max(0, a + b - x);
                a = temp1;
                b = temp2;
            }
            break;

        case 5:
            if (a > 0)
            {
                a = 0;
            }
            break;

        case 6:
            if (b > 0)
            {
                b = 0;
            }
            break;

        default:
            printf("Input tidak valid.\n");
        }
        printf("jug A = %d\n", a);
        printf("jug B = %d\n", b);
    }

    printf("Selamat!");

    return 0;
}
