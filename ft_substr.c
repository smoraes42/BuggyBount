/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:01:56 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/21 17:50:09 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and returns a substring from the string ’s’.
 * The substring begins at index ’start’ and is of maximum size ’len’.*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int			ptr_ind;
	char			*ptr;
	unsigned int		ind;

	ind = start;
	ptr = (char *) malloc(len);
	if (ptr == NULL)
		return (NULL);
	else
	{
		ptr_ind = 0;
		while (len-- && (s[ind] != '\0'))
		{	
			ptr[ptr_ind] = s[ind];
			ptr_ind++;
			ind++;	
			/*
			ptr[ptr_ind] = s[start + ptr_ind];
			ptr_ind++;
			*/
		}
	}
	return (ptr);
}

// fails:
//  \0
//  go over buffer
//
