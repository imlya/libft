/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:03:29 by imatek            #+#    #+#             */
/*   Updated: 2024/05/30 01:47:09 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	while (nbr != 0)
	{	
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_reverse(char *s)
{
	int		i;
	int		len;
	char	c;

	i = 0;
	len = ft_strlen(s) - 1;
	while (i < len)
	{
		c = s[len];
		s[len] = s[i];
		s[i] = c;
		i++;
		len--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	int		j;
	int		len;
	int		sign;
	char	*array;
	long	nbr;

	nbr = n;
	j = 0;
	sign = 1;
	len = ft_len(n);
	if (nbr == 0)
	{
		array = malloc(sizeof(char) * 2);
		if (!array)
			return (NULL);
		array[0] = '0';
		array[1] = '\0';
		return (array);
	}
	if (nbr < 0)
	{
		sign = -1;
		nbr = -nbr;
	}
	array = malloc (sizeof(char) * (len + 1));
	if (!array)
		return (NULL);
	while (nbr != 0)
	{
		array[j++] = ((nbr % 10) + '0');
		nbr /= 10;
	}
	if (sign == -1)
		array[j++] = '-';
	array[j] = '\0';
	return (ft_reverse(array));
}

// int	main()
// {
// 	__builtin_printf("%s", ft_itoa(1000034));
// 	return (0);
// }
