/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrammal <mrammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 09:31:17 by mrammal           #+#    #+#             */
/*   Updated: 2025/11/06 17:03:34 by mrammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pr;
	unsigned char	v;

	pr = (unsigned char *)s;
	v = (unsigned char)c;
	while (n > 0)
	{
		*pr = v;
		pr++;
		n--;
	}
	return (s);
}
