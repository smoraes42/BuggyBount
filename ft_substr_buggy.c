/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:01:56 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/26 22:24:57 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and returns a substring from the string ’s’.
 * The substring begins at index ’start’ and is of maximum size ’len’.*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int				ptr_ind;
	char			*ptr;
	unsigned int	nleft;

	ptr_ind = 0;
	if (!s)
		return (NULL);
	nleft = ft_strlen(s + start);
	ptr = (char *) malloc(nleft + 1);
	if (!ptr)
		return (NULL);
	start--;
	while (nleft-- && len--)
		ptr[ptr_ind++] = s[start++];
	ptr[ptr_ind] = '\0';
	return (ptr);
}
