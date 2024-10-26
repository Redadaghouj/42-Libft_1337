/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:58:21 by mdaghouj          #+#    #+#             */
/*   Updated: 2024/10/26 18:49:24 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	prefix_filter(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		flag = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				flag = 1;
				break ;
			}
			j++;
		}
		if (!flag)
			break ;
		i++;
	}
	return (i);
}

static int	suffix_filter(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	flag;

	i = ft_strlen(s1) - 1;
	while (i > 0)
	{
		j = 0;
		flag = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				flag = 1;
				break ;
			}
			j++;
		}
		if (!flag)
			break ;
		i--;
	}
	if (i == -1)
		i = 0;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*str;
	int		start;
	int		end;

	i = 0;
	start = prefix_filter(s1, set);
	end = suffix_filter(s1, set);
	if (start > end)
		return (ft_strdup(""));
	str = ft_substr(s1, start, end - start + 1);
	return (str);
}
