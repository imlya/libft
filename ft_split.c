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

char	*ft_substr(char const *s, unsigned int start, size_t len);

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
	int		count;
	int		len_word;
	char	**result;

	count = (ft_count_word(s, c));
	result = malloc((count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result[count] = '\0';
	i = 0;
	/*while (s[i])
	{
		while (s[i] == c)
			i++;
		if (ft_strchr(s, c))
			len_word = ft_strlen(s) - i;
		i++;
	}*/
	len_word = ft_strlen_word(s, c);
	while (s[i])
	{
		**result = *ft_substr(s, s[i], s - len_word);
		i++;
	}		
	**result = '\0';
	return (result);
}

/*s = salut ca va 
c = " "
count_word
len_word = ft_strlen(s)
ft_strchr pour avoir la premiere occurence
et l'utiliser dans ft_substr + len_word

int	main()
{
	//ft_count_word("salut   ca va bien  ", ' ');
	__builtin_printf("%s", (char *)ft_split(" salut   ca va bien  ", ' '));
	return (0);
}*/