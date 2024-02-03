/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_dangling.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 06:49:48 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/03 07:03:55 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *createArray()
{
	int arr[3] = {1,2,3};
	return arr;  //Dangling Pointer
				 //  Returning a pointer to an variable from a fucntion
				 //  the local variable memory may be deallocated 
				 //  when the function exits, leaving the pointer dangling
}

int main(void)
{
	int *ptr = (int *)malloc(sizeof(int));
	if (ptr == NULL)
		return (-1);
	int *ptr2 = (int *)malloc(sizeof(int));
	if (ptr == NULL)
		return (-1);

	*ptr = 5;
	printf("%p\n", ptr);
	free(ptr);
	*ptr = 8;
	// freeing memory too soon
	// ptr becomes a dangling pointer as its pointer to a nonexisting
	// memory location, memory that doesn't exist
	printf("%p\n", ptr);
	printf("%d", *ptr);

	free(ptr2);
	free(ptr2); // Dangling Pointer
				// Double-free

	return (0);
}
