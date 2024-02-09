/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 23:01:16 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/26 16:28:11 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*is_positive(int count, int n)
{
	char	*strint;

	strint = (char *) malloc ((count + 1) * sizeof(char));
	if (strint == NULL)
		return (NULL);
	strint[count] = '\0';
	while (count >= 0)
	{
		count--;
		strint[count] = ((n % 10) + '0');
		n /= 10;
	}
	return (strint);
}

char	*is_negative(int count, int n)
{
	char			*strint;
	unsigned int	n1;

	strint = (char *) malloc((count + 2) * sizeof(char));
	if (strint == NULL)
		return (NULL);
	strint[count + 1] = '\0';
	strint[0] = '-';
	n1 = n * (-1);
	while (count > 0)
	{
		strint[count] = ((n1) % 10) + '0';
		n1 /= 10;
		count--;
	}
	return (strint);
}

char	*is_else(int n)
{
	char	*strint;

	strint = (char *) malloc(2 * sizeof(char));
	if (strint == NULL)
		return (NULL);
	if (n == 0)
	{
		strint[1] = '\0';
		strint[0] = '0';
	}
	return (strint);
}

char	*ft_itoa(int n)
{
	int		m;
	int		count;
	char	*strint;

	count = 0;
	m = n;
	while (m)
	{
		m /= 10;
		count++;
	}
	if (n < 0)
		strint = is_negative(count, n);
	else if (n > 0)
		strint = is_positive(count, n);
	else
		strint = is_else(n);
	return (strint);
}
