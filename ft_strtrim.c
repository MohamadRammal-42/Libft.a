/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrammal <mrammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:22:20 by mrammal           #+#    #+#             */
/*   Updated: 2025/11/04 17:40:22 by mrammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

static int	checking(char const c, char const *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (set[j] == c)
		{
			return (1);
		}
		j++;
	}
	return (0);
}

static char	*ft_helpnull(void)
{
	char	*str;

	str = malloc(1);
	if (str == NULL)
		return (0);
	str[0] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	start = 0;
	i = 0;
	while ((checking(s1[start], set)) && s1[start])
		start++;
	end = ft_strlen(s1) - 1;
	while ((checking(s1[end], set)) && s1[end])
		end--;
	if (start > end)
		return (ft_helpnull());
	str = malloc(sizeof(char) * (end - start + 1 + 1));
	if (str == NULL)
		return (NULL);
	while (start <= end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
