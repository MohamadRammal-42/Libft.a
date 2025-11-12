/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrammal <mrammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 14:10:34 by mrammal           #+#    #+#             */
/*   Updated: 2025/11/05 01:28:17 by mrammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*data;
	size_t				i;

	data = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (data[i] == (unsigned char)c)
		{
			return ((void *)(data + i));
		}
		i++;
	}
	return (0);
}
