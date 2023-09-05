#include <stdlib.h>

int val_abs(int n)
{
    if (n >= 0)
        return n;
    else
        return (-n);
}

int *ft_range(int min, int max)
{
    int i;
    int *rang;
    int len = val_abs(max - min);
    rang = (int *)malloc(sizeof(int) * (len));
    if (!rang)
        return NULL;
    if (max <= min)
        return NULL;
    i = 0;
    while (i < len  && max > min)
    {
        rang[i] = min;
        i++;
        min++;
    }
    return rang;
}
#include <stdio.h>

int main()
{
    int *arg = ft_range(2, 8);// 6
    int i = 0 ;
    while(i < 6)
    {
        printf("range[%d] = %d, ", i, arg[i]);
        i++;
    }
    printf("\n");
}