/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelad <aabdelad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 21:20:54 by aabdelad          #+#    #+#             */
/*   Updated: 2021/12/02 21:34:29 by aabdelad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char ( *f) (unsigned int, char))
{
	unsigned int	i;
	char			*ptr;
	char			*src;

	i = 0;
	src = (char *)s;
	if (!s || !f)
		return (NULL);
	ptr = malloc(sizeof (char) * (ft_strlen(src) + 1));
	if (!ptr)
		return (NULL);
	while (src[i] != '\0')
	{
		ptr[i] = f(i, src[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
