/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelad <aabdelad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:53:21 by aabdelad          #+#    #+#             */
/*   Updated: 2021/12/02 21:29:54 by aabdelad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*tab1;
	unsigned char	*tab2;

	tab1 = (unsigned char *)s1;
	tab2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (tab1[i] && tab2[i] && tab1[i] == tab2[i] && i < n - 1)
		i++;
	return (tab1[i] - tab2[i]);
}
