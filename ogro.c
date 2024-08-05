#include <stdio.h>

int esq;
int dir;

int main()
{
    scanf("%i", &esq);
    if (esq < 0 || esq > 5)
    {
        return 1;
    }
    scanf("%i", &dir);
    if (dir < 0 || dir > 5)
    {
        return 1;
    }
    if (dir == esq)
    {
        return 1;
    }
    else if (esq > dir)
    {
        printf("%i", (esq + dir));
    }
    else
    {
        printf("%i", (2 * (dir - esq)));
    }
    return 0;
}