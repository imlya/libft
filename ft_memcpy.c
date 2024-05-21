/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:05:44 by imatek            #+#    #+#             */
/*   Updated: 2024/05/21 12:07:34 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s_src;
	char	*s_dest;
	
	s_src = (char *)src;
	s_dest = (char *)dest;
	if (!src || !dest)
		return (NULL);
	i = 0;
	while (i < n)
	{
		s_dest[i] = s_src[i];
		i++;
	}
	s_dest[i] = '\0';
	return (dest);
}

/*int	main()
{
	char	src[] = "";
	char	dest[] = "yo";
	
	__builtin_printf("%s", (char *)ft_memcpy(dest, src, 1));
	return (0);
}*/