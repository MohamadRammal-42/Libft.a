/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrammal <mrammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 10:13:50 by mrammal           #+#    #+#             */
/*   Updated: 2025/11/05 01:29:01 by mrammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t num)
{
	unsigned char		*d;
	const unsigned char	*s;

	s = (const unsigned char *)src;
	d = (unsigned char *)dst;
	while (num--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dst);
}
