/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrammal <mrammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:33:29 by mrammal           #+#    #+#             */
/*   Updated: 2025/11/02 15:04:01 by mrammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;
	int			i;

	i = 0;
	str = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			str = (char *)&s[i];
		}
		i++;
	}
	if ((char)c == '\0')
	{
		str = (char *)&s[i];
	}
	return ((char *)str);
}
