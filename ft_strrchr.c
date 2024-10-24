/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:00:54 by mdaghouj          #+#    #+#             */
/*   Updated: 2024/10/24 07:48:56 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len > 0)
	{
		if (s[len] == (char) c)
		{
			return ((char *) &s[len]);
		}
		len--;
	}
	return (NULL);
}

int main()
{
	char *x = ft_strrchr("hamza", 'a');
	printf("%s\n", x); 
	return 0;
}
