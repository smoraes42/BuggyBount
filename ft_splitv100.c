#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char    **cr_ar_str(const char *s, char c)
{
    int        ind;
    int        count;
    int        innerind;
    char    **array;

    count = 0;
    ind = 0;
    while ((s[ind]) != '\0')
    {
        if (s[ind] == c && s[ind+1] != c && s[ind +1] != '\0')
                count++;
        ind++;
    }
    array = (char **) malloc (count * sizeof(char *));
    if (array == NULL)
        return (NULL);
    return (array);
}
void    *cr_str(int endsubstr)
{
    char    *substr;

    substr = (char *) malloc(endsubstr * sizeof(char));
    if (substr == NULL)
        return (NULL);
    return (substr);
}
size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t    i;

    i = 0;
    if (!dst || !src)
        return (0);
    if (dstsize == 0)
        return (strlen((char *) src));
    while (src[i] != '\0' && i < dstsize -1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (strlen((char *)src));
}
char    **ft_split(char const *s, char c)
{
    int        inisubstr;
    int        endsubstr;
    int        substr;
    char    **array;

    substr = 0;
    inisubstr = 0;
    endsubstr = 0;
    array = cr_ar_str(s, c);

    while (s[inisubstr] != '0')
    {
        if (s[inisubstr] == c)
        {
            array[substr] = cr_str(endsubstr + 1);
        }
        inisubstr = endsubstr;
        ft_strlcpy(array[substr], (&s + (endsubstr -inisubstr)), endsubstr);
        endsubstr = 1;
        substr++;
    }
    return (array);
}

int main() {
  ft_split("teestttestestt", 't');

  return 0;
}
