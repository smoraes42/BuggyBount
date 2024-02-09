/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:46:29 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/23 18:40:12 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    **cr_ar_str(const char *s, char c)
{
	int		ind;
	int		count;
	int		innerind;
	char	**array;

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
void	*cr_str(int endsubstr)
{
	char	*substr;

	substr = (char *) malloc(endsubstr * sizeof(char *));
	if (substr == NULL)
		return (NULL);
	return (substr);
}
char	**ft_split(char const *s, char c)
{
	int		inisubstr;
	int		endsubstr;
	int		substr;
	char	**array;

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
		ft_strlcpy(array[substr], (&s[inisubstr]), endsubstr);
		endsubstr = 1;
		substr++;
	}
	return (array);
}
