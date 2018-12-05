/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 12:15:48 by mybenzar          #+#    #+#             */
/*   Updated: 2018/12/06 00:58:10 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list find_fd(char **list, int fd)
{
	t_list *tmp;

	tmp = *list;
	if (tmp)
	{
		while (tmp)
		{
			if (tmp->content_size == fd)
				return (tmp);
			tmp->next;
		}
	}
	tmp = ft_lstnew("\0", fd);
	ft_lstadd(list, tmp);
	return (tmp);
}

static char *ft_strnjoin_and_free(char *s1, char *s2, int nb)
{
	char *str;
	char *tmp;
	if (!s1 || !s2)
		return (NULL);
	if (!(str = (char*)ft_memalloc(ft_strlen(s1) + nb)))
		return (NULL);
	ft_strcat(str, s1);
	ft_strncat(str, s2, nb);
	tmp = str;
	free(tmp);
	return (str);
}

int	get_next_line(const int fd, char **line)
{
	static t_list	*statictmp;
	char			buf[BUFF_SIZE + 1];
	t_list			*tmp;
	int				nb;

	if (fd < 0 || !line || read(fd, buf, 0) < 0 || BUFF_SIZE < 0)
		return (-1);
	tmp = find_fd(&statictmp, fd);
	while (nb = read(fd, buf, BUF_SIZE) && !ft_strchr(tmp->content, '\n'))
		tmp->content = ft_strnjoin(tmp->nextp, buf, nb);
	nb = 0;
	while ((char*)tmp->content[nb] && (char*)tmp->content[nb] != '\n')
		nb++;
	tmp = ft_strndup(tmp->content, nb);
	return (1);
}
