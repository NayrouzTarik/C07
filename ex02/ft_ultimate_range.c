#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int *rtr;
    int len = max - min;

    rtr = (int *)malloc(sizeof(int) * (len));
    if ((rtr) == NULL)
        return -1;
    if (max <= min)
    {
        rtr = NULL;
        return 0;
    }
    i = 0;
    while (i <  len && max > min)
    {
            rtr[i] = min;
            i++;
            min++;
    }
    *range = rtr;
    return len;
}


#include <stdio.h>
int main(void)
{
    int *rang = NULL;
    int size = ft_ultimate_range(&rang, 2, 8);
    int i = 0 ;
    while(i < 6)
    {
        printf("range[%d] = %d, ", i, rang[i]);
        i++;
    }
    printf("\n");
    printf("%d\n", size);
}