/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrammal <mrammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 10:03:49 by mrammal           #+#    #+#             */
/*   Updated: 2025/11/06 17:08:50 by mrammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>

void	ft_memset(void *s, int c, size_t n)
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
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
