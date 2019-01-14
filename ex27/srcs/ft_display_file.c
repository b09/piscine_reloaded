/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_display_file.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 13:18:39 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/13 21:40:45 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		fd;
	char	str[2];

	if (argc != 2)
	{
		if (argc < 2)
			write(2, "File name missing.\n", 19);
		else
			write(2, "Too many arguments.\n", 20);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Error: Could not access file\n", 29);
		return (0);
	}
	while (read(fd, str, 1))
		write(1, str, 1);
	return (0);
}
