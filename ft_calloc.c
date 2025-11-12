/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrammal <mrammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:15:01 by mrammal           #+#    #+#             */
/*   Updated: 2025/11/12 15:54:30 by mrammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	all_sizes;
	void	*ptr;

	if (size != 0 && count > (sizeof(size_t) / size))
	{
		return (0);
	}
	all_sizes = size * count;
	ptr = malloc(all_sizes);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < all_sizes)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
