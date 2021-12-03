/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelad <aabdelad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:06:57 by aabdelad          #+#    #+#             */
/*   Updated: 2021/11/25 00:53:16 by aabdelad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	flen;

	if (!s)
		return (0);
	dest = NULL;
	if ((size_t) start > ft_strlen(s))
		return (ft_strdup(""));
	flen = ft_strlen(&s[start]);
	if (len > flen)
		len = flen;
	dest = (char *)malloc(len + 1);
	if (dest == 0)
		return (0);
	ft_memcpy(dest, s + start, len);
	dest[len] = '\0';
	return (dest);
}
