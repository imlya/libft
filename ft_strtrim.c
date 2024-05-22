/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:36:51 by imatek            #+#    #+#             */
/*   Updated: 2024/05/22 23:15:13 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
char	ft_isCharSet(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*new_s;

	i = 0;
	while (ft_isCharSet(set, s1[i]) == 1)
		i++;
	j = ft_strlen(s1) - 1;
	while (ft_isCharSet(set, s1[j]) == 1)
		j--;
	new_s = malloc (sizeof(char) * ((j - i) + 1));
	if (!new_s)
		return (NULL);
	k = 0;
	while (s1[i] && i <= j)
	{
		new_s[k] = s1[i];
		i++;
		k++;
	}
	new_s[k] = '\0';
	return (new_s);
}
int	main()
{
	__builtin_printf("%s", ft_strtrim("  .jfesf s. kdf  ", " ."));
	return (0);
}
