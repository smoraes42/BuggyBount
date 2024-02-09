/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:50:47 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/25 19:38:57 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int headfind(const char *s1, const char *set)
{
    int s1ind;

    s1ind = 0;
    while (s1[s1ind] != '\0')
    { 
      if (ft_strchr(set,s1[s1ind]) == 0)
        return (s1ind);
      s1ind++;
    }
    return (s1ind);
}
int tailfind(const char* s1, const char *set, int s1len)
{

	while (s1len >= 0 )
	{
		if (ft_strchr(set, s1[s1len]) == 0)
			return (s1len);
		s1len--;
	}
	return (s1len);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	int		head;
	int		tail;
	char	*str;
	int		s1len;

	s1len = ft_strlen((char *)s1);
	head = headfind(s1, set);
	tail = tailfind(s1, set, s1len);
	printf("head -> %d\n", head);
	printf("tail -> %d\n", tail);
	str = (char *) malloc ((tail - head + 2) * sizeof(char));
	if (str == NULL)
		return (NULL);
	strlcpy(str, (s1 + head), ((tail - head) + 2));
	return (str);
}
