/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrammal <mrammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:50:07 by mrammal           #+#    #+#             */
/*   Updated: 2025/11/06 15:50:33 by mrammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static int	num_of_words(char const *str, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i])
	{
		if (str[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else
		{
			if (str[i] == c)
				in_word = 0;
		}
		i++;
	}
	return (count);
}

static char	*ft_strcpy_range(char const *src, int start, int end)
{
	char	*dest;
	int		i;

	dest = malloc((end - start + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (start < end)
	{
		dest[i] = src[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		j;
	int		k;
	char	**ans;

	if (str == NULL)
		return (NULL);
	ans = malloc((num_of_words(str, c) + 1) * sizeof(char *));
	if (ans == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] != '\0' && str[i] == c)
			i++;
		j = i;
		while (str[i] != '\0' && str[i] != c)
			i++;
		if (i > j)
			ans[k++] = ft_strcpy_range(str, j, i);
	}
	ans[k] = NULL;
	return (ans);
}
