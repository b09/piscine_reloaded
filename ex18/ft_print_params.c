/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_params.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/08 18:56:29 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/13 17:47:05 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argv, char *argc[])
{
	int		i;
	char	*a;

	i = 1;
	while (argv-- > 1)
	{
		a = argc[i];
		while (*a != '\0')
		{
			ft_putchar(*a);
			++a;
		}
		ft_putchar('\n');
		++i;
	}
	return (0);
}
