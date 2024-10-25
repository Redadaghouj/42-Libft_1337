/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:17:42 by mdaghouj          #+#    #+#             */
/*   Updated: 2024/10/25 08:02:45 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_charset(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

int	count_words(char const *str, char c)
{
	int	i;
	int	is_charset;
	int	count;

	i = 0;
	count = 0;
	is_charset = 0;
	while (str[i] != '\0')
	{
		if (check_charset(str[i], c))
			is_charset = 0;
		else if (!check_charset(str[i], c) && !is_charset)
		{
			count++;
			is_charset = 1;
		}
		i++;
	}
	return (count);
}

char	*extract_word(char const *str, char c)
{
	int		len;
	int		i;
	char	*word;

	len = 0;
	i = 0;
	while (!check_charset(str[len], c) && str[len] != '\0')
		len++;
	word = (char *) malloc(sizeof (char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**buffer;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	len = count_words(s, c);
	buffer = (char **) malloc((len +1) * sizeof(char *));
	if (!buffer)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		if (!check_charset(*s, c))
		{
			buffer[i] = extract_word(s, c);
			i++;
			while (!check_charset(*s, c) && *s != '\0')
				s++;
		}
		else
			s++;
	}
	buffer[i] = NULL;
	return (buffer);
}
