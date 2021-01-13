/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwanetta <dwanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 15:31:56 by dwanetta          #+#    #+#             */
/*   Updated: 2021/01/08 15:03:04 by dwanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# if BUFFER_SIZE > 1000000
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

typedef struct		s_list
{
	char			*str;
	int				return_vla;
	int				fd;
	struct s_list	*next;
}					t_list;

int					ft_read_save(char **line, char *buf, t_list **save, int fd);
int					ft_strlen(char *str);
int					ft_read_line(int fd, char *buf);
void				ft_memcpy(void *dst, void *src, int n);
char				*ft_strjoin(char *s1, char *s2, int check_n);
int					get_next_line(int fd, char **line);

#endif
