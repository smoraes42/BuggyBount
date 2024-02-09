/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 23:01:16 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/24 23:15:03 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Project/libft.h"

void is_negative(int count, char *strint, int n)
{
	strint = (char *) malloc ((count * sizeof(char)) + 2);
	if (strint == NULL)
		return (NULL);
	strint[count + 1] = '\0';
	strint[0] = '-';
	while (count >= 0)
	{
		strint[count] = (n*(-1) /= 10 + '0'); 
		count--;
	}
}
void is_positive(int count, char *strint, int n)
{
	strint = (char *) malloc ((count * sizeof(char)) + 1));
	if(strint ==  NULL)
		return (NULL);
	strint[count + 1] = '\0';
	while (count >=0 )
	{
		strint[count] = (n /= 10 + '0'); 
		count--;
	}
}
char *ft_itoa(int n)
{
	int		count;
	char*	strint;
	int		m;

	count = 0;
	m = n;
	while (m)
	{
		m /= 10;
		count++;
	}
	if (n < 0)
		is_negative(n, strint, count);
	else
		is_positive(n, strint, count);
	return (strint);
}


/*
Parameters n: the integer to convert.
Return value The string representing the integer.
NULL if the allocation fails.
External functs. malloc
Description Allocates (with malloc(3)) and returns a string
representing the integer received as a
char	*ft_itoa(int n)*/
