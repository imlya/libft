/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 18:09:53 by imatek            #+#    #+#             */
/*   Updated: 2024/05/27 20:50:45 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*current;

	current = lst;
	if (current == NULL)
		return (0);
	i = 1;
	while (current->next != NULL)
	{
		current = current->next;
		i++;
	}
	current->next = NULL;
	return (i);
}
