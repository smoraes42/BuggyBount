/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:50:47 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/25 17:09:56 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters 
 * specified in ’set’ removed from the beginning and the end of the string. */

// abc 
// "ab   dfdjhfjhaajfalk  abcabc"

#include "libft.h"

//static int ft_contains(char c, char *set)
//{
//  int i;
//  
//  i = 0;
//  while (set[i] != '\0')
//  {
//    if (c == set[i])
//      return (1);
//    i++;
//  }
//  return (0);
//}

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

int tailfind(const char* s1, const char *set, int head)
{
	int	s1ind;
	int s1len;

	s1len = ft_strlen((char *)(s1 + head));
 	printf("s1len -> %d\n", s1len);
	s1ind = 0;
	while (s1[s1ind + head] != '\0')
	{
		if (!(ft_strchr(set, s1[s1ind + head]) == 0))
			return (s1ind + head);
		s1ind++;
	}
	return (s1ind + head);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	//int		ind;
	//char	*trimmed;
	int		head;
	int		tail;

	head = headfind(s1, set);
	printf("str -> %s\n", s1+head);
	tail = tailfind(s1, set, head);
	printf("head -> %d\n", head);
	printf("tail -> %d\n",tail);


	//trimmed = (char *)malloc (char);
	//while (s1[ind])
	//	return (0);
	return (0);
}
