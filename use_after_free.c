/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_dangling_use_after_free.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 07:13:33 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/03 07:31:55 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void vulnerable_function(int *data)
{
	printf("Value: %d\n", *data);
}

int main(void)
{
	int *ptr = malloc(sizeof(int));
	if (ptr == NULL)
		return 1;

	*ptr = 10;

	vulnerable_function(ptr);

	free(ptr);

	vulnerable_function(ptr);
	return (0);

}
