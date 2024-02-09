/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:46:29 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/22 19:37:27 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**createar(const char *s, int count, char c)
{
	char	**splited;
	count = 1;
	while (*s) /* count c to find the amount o substrings*/
	{
		if (*s++ == c)
		{
			count++;
		}
	}
	/* Allocates the array of strings based on the amount of c */
	splited = (char **) malloc (count * sizeof(char *));
	if (splited == NULL)
		return (NULL);
	return (splited);
}

char **ft_split(char const *s, char c)
{
	char	**splited; /* Array of strings */
	int	inisubstr; /* Where to start counting before and after a c*/
	int	endsubstr; /* index of the c */
	int	size; /* size of whatver */
	int	count;
	int	arrayindex;
	count = 0;

	splited = createar(s, count, c); /*create the array of strings */
	arrayindex = 0;
	inisubstr = 0;
	endsubstr = 1;
	while(*s != '0')
	{
		while(*s++ != c && count) /* find where is ac  and set */
			endsubstr++; /* the index of c to create a subarray */
		size = endsubstr - inisubstr;
		splited[arrayindex] = (char *) malloc(endsubstr);
		ft_strlcpy(splited[arrayindex], (&s[inisubstr]), endsubstr);
		inisubstr = endsubstr;
		endsubstr = 1;
		arrayindex++;
		count--;
	}
	return (splited);
}


//Return value The array of new strings resulting from the split.
//NULL if the allocation fails.
//External functs. malloc, free
//Description Allocates (with malloc(3)) and returns an array 
//of strings obtained by splitting ’s’ using the
//character ’c’ as a delimiter. The array must end
//with a NULL pointer.
