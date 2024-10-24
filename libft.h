/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:50:52 by reda              #+#    #+#             */
/*   Updated: 2024/10/24 16:10:03 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlen(const char *s);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
void	*ft_memset(void *s, int c, size_t n);
char    *ft_strdup(const char *s);
char    *ft_substr(const char *s, unsigned int start, size_t len);

#endif
