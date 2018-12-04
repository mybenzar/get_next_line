/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 13:50:23 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/21 14:16:03 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int argc, char **argv)
{
	char **line;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		{
			ft_putendl("open() failed");
			return (-1);
		}
	close(fd);
	while (get_next_line(fd, line) == 1)
	{
		write(fd, line, ft_strlen(line));
		free(line);
	}
	return (0);
}
