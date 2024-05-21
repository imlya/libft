/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:05:41 by imatek            #+#    #+#             */
/*   Updated: 2024/05/21 13:28:48 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s_s1;
	char	*s_s2;

	s_s1 = (char *)s1;
	s_s2 = (char *)s2;
	if (!s_s1)
		return (0);
	i = 0;
	while (s_s1[i] && i < n)
	{
		if (s_s1[i] == s_s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char) s2[i]);
	}
	return (0);
}
