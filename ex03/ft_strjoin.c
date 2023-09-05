
#include <stdlib.h>
#include <string.h>



int ft_size(int siz, char **args, char *delm)
{
    int some = 0;
    int i = 0;
    while (i < siz)
    {
        some = some + strlen(args[i]);
        i++;
    }
    some = some + (strlen(delm) * (siz - 1));
    return some;
}

char *ft_strjoin(int size, char **strs, char *sep)// 3 bon jour
{
    int     i;
    char    *ret;
    
    
    if (size == 0)
	{
		ret = malloc(sizeof(char));
		*ret = 0;
		return (ret);
	}
    ret = malloc(sizeof(char ) * (ft_size(size, strs, sep) + 1));
    i = 0;
    while(i < size)
    {
        strcat(ret, strs[i]);
        if (i < size - 1)
            strcat(ret, sep);
        i++;
    }
    return ret;
}
 #include <stdio.h>
int main(int ac, char **av)
{
    char *sep = "**";
    printf("%s\n", ft_strjoin(ac, av, sep));
}