/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:37:45 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/21 18:12:34 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char *dsttmp;
	size_t dstlen;
	size_t nleft;
	const char *srctmp;

	srctmp = src;
	dsttmp = dst;
	nleft = dstsize;
	while (nleft != 0 && *dsttmp != '\0')
	{
		dsttmp++;
	}
	dstlen = dsttmp - dst;
	nleft = dstsize - dstlen;
	if (nleft == 0)
		return(dstlen + strlen(srctmp));
	while (*srctmp != '\0')
	{
		if (nleft != 1)
		{
			*dsttmp++ = *srctmp;
			nleft--;
		}
		srctmp++;
	}
	*dsttmp = '\0';
	return(dstlen + (srctmp - src));
}
