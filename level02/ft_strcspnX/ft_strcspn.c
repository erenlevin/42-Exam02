#include <stdio.h>

size_t  ft_strcspn(const char   *s, const char  *reject)
{
    int     i;
    int     i2;

    i = 0;
    i2 = 0;
    while (s[i] != '\0')
    {
        i2 = 0;
        while (reject[i2] != '\0')
        {
            if(s[i] == reject[i2])
                return (i);
            i2++;
        }
        i++;
    }
    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

/*
** 'ft_strcspn' calculates the length of the initial portion of 's1r' consisting
** of chars NOT contained in 's2r'.
*/

/*size_t	ft_strcspn(const char *s1r, const char *s2r)
{
	const char *s1 = s1r;
	const char *s2;

	while (*s1)
	{
		s2 = s2r;
		while (*s2)
		{
			if (*s1 == *s2++)
				return (s1 - s1r);
		}
		s1++;
	}
	return (s1 - s1r);
}*/

int main (void)
{
    char s[] = "abcd";
    char s1[] = "bcd";

    printf("res: %d", ft_strcspn(s, s1));
    return (0);
}
