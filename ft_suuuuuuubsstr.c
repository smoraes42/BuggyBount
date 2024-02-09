/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_suuuuuuubsstr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:01:56 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/27 15:01:03 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and returns a substring from the string ’s’.
 * The substring begins at index ’start’ and is of maximum size ’len’.*/
//char    *ft_substr(char const *s, unsigned int start, size_t len)
//{
//    char*            newstr;
//    unsigned int    n_ind;
//    unsigned int    s_len;
//
//    if (s == NULL)
//        return(NULL);
//
//
//    s_len = strlen(s);
//
//    if (start > s_len)
//    {
//        len = 0;
//        start = 0;
//    }
//
//	int x = ((s_len) - (start));
//
//    newstr = (char *) malloc((x + 1) * sizeof(char));
//
//    if (newstr == NULL)
//    {
//        free(newstr);
//        return (NULL);
//    }
//
//    n_ind = 0;
//
//    while (len > 0 && s[start] != '\0')
//    {
//        newstr[n_ind] = s[start];
//        len--;
//        start++;
//        n_ind++;
//    }
//
//    newstr[n_ind] = '\0';
//
//    return (newstr);
//}
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char*			newstr;
	unsigned int	n_ind;
	unsigned int	s_len;

	if (s == NULL)
		return(NULL);


	s_len = ft_strlen(s);

	if (start >= s_len)
	{
		len = 0;
	}
	if (len > (s_len - start))
	{
		len = s_len - start;
	}
	newstr = (char *) malloc((len + 1) * sizeof(char));
	if (newstr == NULL)
	{
		//free(newstr);
		return (NULL);
	}
	n_ind = 0;
	while (len > 0 && s[start] != '\0')
	{
		newstr[n_ind] = s[start];
		len--;
		start++;
		n_ind++;
	}
	newstr[n_ind] = '\0';
	return (newstr);
}
//
//"hola", 2, 3
//		2, 30
//		3, 2
