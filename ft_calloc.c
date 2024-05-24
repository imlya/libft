/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:05:07 by imatek            #+#    #+#             */
/*   Updated: 2024/05/24 14:44:49 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	sum;

	sum = nmemb * size;
	if (sum > SIZE_MAX)
		return (NULL);
	str = malloc(sum);
	if (!str)
		return (NULL);
	ft_bzero(str, sum);
	return (str);
}
