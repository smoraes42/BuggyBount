#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t    i;

    i = 0;

    while (src[i] != '\0' && i < dstsize -1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (strlen((char *)src));
}
char    **cr_ar_str(const char *s, char c)
{
    int        ind;
    int        count;
    char    **array;

    count = 0;
    ind = 0;
    while ((s[ind]) != '\0')
    {
      while (s[ind] == c && s[ind] != '\0')
        ind++;
      if(s[ind] != c  && s[ind] != '\0')
        count++;
      while (s[ind] != c && s[ind] != '\0')
        ind++;    
    }
    array = (char **) malloc ((count + 1)* sizeof(char *));
    if (array == NULL)
        return (NULL);
    return (array);
}

/*
char    **cr_ar_str(const char *s, char c)
{
    int        ind;
    int        count;
    char    **array;

    count = 0;
    ind = 0;
    while ((s[ind]) != '\0')
    {
        if (s[ind] == c && s[ind-1] != c && s[ind +1] != '\0')
            count++;
        ind++;
    }
    array = (char **) malloc (count * sizeof(char *));
    if (array == NULL)
        return (NULL);
    return (array);
}
*/

void    *cr_str(int endsubstr)
{
    char    *substr;

    substr = (char *) malloc(endsubstr * sizeof(char));
    if (substr == NULL)
        return (NULL);
    return (substr);
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

    while (s[inisubstr] != '\0')
    {
      endsubstr++;
      if (s[inisubstr] == c)
      {
        array[substr] = cr_str(endsubstr);
        ft_strlcpy(array[substr], &s[inisubstr], endsubstr);
        substr++;
        endsubstr = 0;
      }
      inisubstr++;      
    }
    return (array);
}

















int main()
{

    char **v;

    v = ft_split("strtsrtstttttetgjjhj", 't');

    return (0);
}
