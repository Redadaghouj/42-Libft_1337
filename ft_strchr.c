/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:14:14 by mdaghouj          #+#    #+#             */
/*   Updated: 2024/10/23 09:33:07 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char) c)
		{
			return ((char *) s);
		}
		s++;
	}
	return (NULL);
}

int main()
{
	char *x = ft_strchr("hamza", '\0');
	printf("%s\n", x);
	return 0;
}
