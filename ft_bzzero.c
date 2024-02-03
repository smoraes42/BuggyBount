/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 04:25:17 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/26 00:22:11 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Writes n zeroed bytes to the string s. If n is zero, bzero() does nothing */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n >= 0)
	{
		str[n] = '\0';
		n--;
	}
}
