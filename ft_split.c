/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:31:09 by imatek            #+#    #+#             */
/*   Updated: 2024/05/24 13:02:29 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_word(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

int	ft_strlen_word(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	unsigned int	first_occ;
	int		len_word;
	char	**result;

	result = malloc((ft_count_word(s, c) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (ft_strchr(s, c))
			len_word = ft_strlen(s) - i;
		i++;
	}
	len_word = ft_strlen_word(s, c);
	
	while (s[i])
	result = ft_substr(s, &s[i], len_word);
	**result = '\0';
	return (result);
}
/*s = salut ca va 
c = " "
count_word
len_word = ft_strlen(s)
ft_strchr pour avoir la premiere occurence
et l'utiliser dans ft_substr + len_word*/

int	main()
{
	//ft_count_word("salut   ca va bien  ", ' ');
	__builtin_printf("%s", ft_split(" salut   ca va bien  ", ' '));
	return (0);
}
