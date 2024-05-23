/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:30:33 by imatek            #+#    #+#             */
/*   Updated: 2024/05/23 13:40:39 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*new_s;

	if (start > len)
		return (NULL);
	if (len == 0)
		return (NULL);
	new_s = malloc(sizeof(char) * (len + 1));
	if (!new_s)
		return (NULL);
	i = start;
	j = 0;
	while (s[i])
	{
		if (j < len)
		{
			new_s[j] = s[i];
			j++;
		}
		i++;
	}
	new_s[j] = '\0';
	return (new_s);
}
//ft_strlen new_s + start < len 

/*int	main(void)
{
	char src[] = "Coucouuuu";

	__builtin_printf("%s\n", ft_substr(src, -1, 5));
	return (0);
}*/
