/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 13:50:23 by mybenzar          #+#    #+#             */
/*   Updated: 2018/12/06 19:22:10 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	char *line;
	int fd;

	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
		{
			ft_putendl("open() failed");
			return (0);
		}
	while (get_next_line(fd, &line) > 0)
	{
		write(fd, line, ft_strlen(line));
		free(line);
	}
	close(fd);
	return (0);
}
