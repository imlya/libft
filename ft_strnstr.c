/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:06:26 by imatek            #+#    #+#             */
/*   Updated: 2024/05/26 00:25:30 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle == NULL)
		return (haystack);
	if (len == 0)
		return (NULL)
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && (haystack [i + j] == needle [j]))
		{
				j++;
			if (needle[j] == '\0')
				return (&haystack[i]);
		}
		i++;
	}
	return (0);
}

/*int	main()
{
	char    str[] = "hello ca va bien";
	char    to_find[] = "";

	__builtin_printf("%s\n", ft_strnstr(str, to_find, 99));
	return (0);
}*/