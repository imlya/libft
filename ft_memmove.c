/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:05:48 by imatek            #+#    #+#             */
/*   Updated: 2024/05/21 14:59:35 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s_src;
	char	*s_dest;

	s_src = (char *)src;
	s_dest = (char *)dest;
	if (!src)
		return (NULL);
	if (dest < src)
	{
		i = 0;
		while (s_src[i] && i < n)
		{
			s_dest[i] = s_src[i];
			i++;
		}
		return (dest);
	}
	else
	{
		i = n - 1;
		while (i >= 0)
		{
			s_dest[i] = s_src[i];
			i--;
		}
		return (dest);
	}
}

int	main()
{
	__builtin_printf("%s", (char *)ft_memmove("hello", "youu", 1));
	return (0);
}