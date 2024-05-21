/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:05:52 by imatek            #+#    #+#             */
/*   Updated: 2024/05/21 12:36:01 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (!str)
		return (NULL);
	while (i < n)
	{
		str[i++] = c;
	}
	return (s);
}

/*int	main()
{
	char	str[] = "hello";
	
	__builtin_printf("%s", (char *)ft_memset(str, 'a', 5));
	return (0);
}*/