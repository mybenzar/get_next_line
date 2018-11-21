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

int	get_next_line(const int fd, char **line)
{
	static char	buf;
	char		buf_read;
	t_list		*tmp;
	int			nb;

	nb = 0;
	tmp->content_size = fd;
	while (nb++ <= BUF_SIZE)
	{
		nb = read(fd, &buf, BUF_SIZE);
		if (!(tmp->content = ft_strjoin(buf, buf_read)))
			return (NULL);
		tmp = tmp->next;
	}
}
