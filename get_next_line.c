/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 12:15:48 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/21 14:16:04 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	error_return(char **buf, const int fd, char **line)
{
	if (fd == -1 || line == NULL)
		return (-1);
	if (!*buf)
	{
		if (!(*buf = (char*)malloc(sizeof(char) * BUF_SIZE + 1)))
			return (-1);
	}
	return (0);
}

int	get_next_line(const int fd, char **line)
{
	static char	buf;
	char		buf_read;
	t_list		*tmp;
	int			nb;

	if (error_return == -1)
		return (-1);
	tmp->content_size = fd;
	while (read(fd, &buf, BUF_SIZE))
	{
		if (!(tmp->content = ft_strjoin(buf, buf_read)))
			return (-1);
		tmp = tmp->next;
	}
	return (1);
}
