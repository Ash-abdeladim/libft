/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelad <aabdelad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:48:35 by aabdelad          #+#    #+#             */
/*   Updated: 2021/11/25 17:17:56 by aabdelad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	s = (char *) src;
	d = (char *) dest;
	i = 0;
	if ((char *)dest == NULL && (char *)src == NULL)
		return (NULL);
	if (dest > src)
		while (len--)
			d[len] = s[len];
	else if (dest <= src)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}
