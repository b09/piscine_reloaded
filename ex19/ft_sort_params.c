/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 13:16:52 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/09 18:52:46 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 != '\0'))
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int		main(int argv, char *argc[])
{
	int	i;

	i = 1;
	while ((i <= (argv - 1)) && (argc[i + 1]))
	{
		if (ft_strcmp(argc[i], argc[i + 1]) <= 0)
			++i;
		else
		{
			ft_swap(&argc[i], &argc[i + 1]);
			i = 1;
		}
	}
	i = 1;
	while (i <= (argv - 1))
		ft_putstr(argc[i++]);
	return (0);
}
