/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda <reda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:50:52 by reda              #+#    #+#             */
/*   Updated: 2024/10/25 23:38:20 by reda             ###   ########.fr       */
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
int		ft_isalpha(int c);
int		ft_isdigit(int c);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strdup(const char *s);
char	*ft_substr(const char *s, unsigned int start, size_t len);
void	ft_putchar_fd(char c, int fd);
typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
t_list	*ft_lstlast(t_list *lst);

#endif
