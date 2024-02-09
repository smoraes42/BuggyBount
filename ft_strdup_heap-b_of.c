/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:31:56 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/26 22:12:46 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		s1l;
	int		i;
	char	*dst;

	i = 0;
	s1l = (ft_strlen((char *) s1) + 1);
	dst = malloc(s1l * sizeof(char));
	if (dst != NULL)
	{
		while (s1l > 0)
		{
			dst[i] = s1[i];
			i++;
			s1l--;
		}
		dst[i] = '\0';
		return (dst);
	}
	return (NULL);
}
