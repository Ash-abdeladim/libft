/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelad <aabdelad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:38:39 by aabdelad          #+#    #+#             */
/*   Updated: 2021/11/25 17:15:56 by aabdelad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ldst;
	size_t	lsrc;
	size_t	res;

	if (dstsize == 0)
		return (ft_strlen(src));
	else if (dstsize < ft_strlen(dst))
		res = ft_strlen(src) + dstsize;
	else
		res = ft_strlen(src) + ft_strlen(dst);
	ldst = 0;
	while (dst[ldst])
		ldst++;
	lsrc = 0;
	while (src[lsrc] && ldst < dstsize - 1)
	{
		dst[ldst] = src[lsrc];
		ldst++;
		lsrc++;
	}
	dst[ldst] = '\0';
	return (res);
}
