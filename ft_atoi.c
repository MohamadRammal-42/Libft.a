/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrammal <mrammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:58:54 by mrammal           #+#    #+#             */
/*   Updated: 2025/11/03 14:40:15 by mrammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

static int	ft_isspace(const char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\n'
		|| str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int	sum;
	int	i;
	int	sign;

	sign = 1;
	sum = 0;
	i = ft_isspace(str, 0);
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	return (sign * sum);
}
