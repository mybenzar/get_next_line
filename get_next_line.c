/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 12:15:48 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/20 16:15:11 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(const int fd, char **line)
{
	static int	nb;
	t_list		buf;

	nb = 0;
	nb = read(fd, &buf, BUF_SIZE);
	while (nb++ <= BUF_SIZE)
	{
		line[i] = buf;
		if (buf == '\n')
			return (
	}
}
