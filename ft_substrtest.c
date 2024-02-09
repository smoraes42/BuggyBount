/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substrtest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:47:57 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/28 20:51:25 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/Project/libft.h"

#include "libft.h"


void	ft_fillsub(char **array)
{
	ft_substr
}

void ft_substr(char **array, const char *s, char c, size_t ar_ind)
{
	size_t ind;
	size_t size_sub;


	ind = 0;
	size_sub = 0;
	ar_ind = 0;
	while (s[ind] != '\0')
	{
		while (s[ind] != c && s[ind] != '\0')
		{
			size_sub++;
			ind++;
		}
		if (s[ind] == c &&)
		{	
			array[ar_ind] = (char *) malloc((size_sub + 1) * sizeof(char));
			if (array[ar_ind] == NULL)
				return (NULL);
			ft_fillsub(array[ind]);
		}
		while (s[ind] == c && s[ind] != '\0')
			ind++;
	}
}

size_t	ft_counter(const char *s, char c)
{
	size_t	ind;
	size_t count;

	ind = 0;
	count = 0;
	while (s[ind] != '\0')
	{
		while (s[ind] == c && s[ind] != '\0')
			ind++;
		if (s[ind] != c && s[ind] != '\0')
			count++;
		while (s[ind] != c && s[ind] !='\0')
			ind++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	**array;
	size_t	count;
	size_t arrayind;

	if (!s)
		return (NULL);
	count = ft_counter(s, c);
	printf("\ncount -> %zu", count);
	array = (char **) malloc((count + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	arrayind = 0;
	while (count > 0)
	{
		count--;
		ft_substr(array, s, c, arrayind);
		arrayind++;
	}
	return (array);
}

int main(int argc, char **argv)
{
	(void) argc;
	char **sub;
	sub = ft_split(argv[1], argv[2][0]);
	return (0);
}
