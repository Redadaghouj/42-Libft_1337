/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:03:12 by mdaghouj          #+#    #+#             */
/*   Updated: 2024/10/27 12:03:52 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*curr;

	if (!lst || !del)
		return ;
	ptr = *lst;
	while (ptr != NULL)
	{
		curr = ptr;
		ptr = ptr->next;
		ft_lstdelone(curr, del);
	}
	*lst = NULL;
}
