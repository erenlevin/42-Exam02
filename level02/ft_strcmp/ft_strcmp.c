#include <stdio.h>

int     ft_strcmp(char  *s1, char   *s2)
{
    int     i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        i++;
    return(s1[i] - s2[i]);
}

int main(void)
{
    char str[] = "aaa";
    char str2[] = "aaab";

    printf("res: %d", ft_strcmp(str, str2));
    return (0);
}
