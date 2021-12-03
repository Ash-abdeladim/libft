/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelad <aabdelad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:30:44 by aabdelad          #+#    #+#             */
/*   Updated: 2021/12/02 20:40:02 by aabdelad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		ls1;
	int		ls2;
	char	*str;

	if (s1 && s2)
	{
		ls1 = ft_strlen(s1);
		ls2 = ft_strlen(s2);
		str = (char *)malloc(sizeof(char) * (ls1 + ls2 + 1));
		if (str == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			str[ls1] = s2[i];
			ls1++;
		}
		str[ls1] = '\0';
		return (str);
	}
	return (NULL);
}
