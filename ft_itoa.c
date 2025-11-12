/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrammal <mrammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:35:14 by mrammal           #+#    #+#             */
/*   Updated: 2025/11/12 14:56:13 by mrammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static int	ft_intlen(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_fill(char *str, long n, int len)
{
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[len--] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	long	l;
	int		len;
	char	*str;

	l = n;
	len = ft_intlen(l);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	if (l == 0)
	{
		str[0] = '0';
		return (str);
	}
	else
		ft_fill(str, l, len);
	return (str);
}
