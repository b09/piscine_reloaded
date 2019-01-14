/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/07 18:59:18 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/13 19:32:16 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int j;

	if (nb == 0)
		return (1);
	if ((nb > 12) || (nb < 0))
		return (0);
	i = 1;
	j = 1;
	while (nb >= i)
	{
		j = i * j;
		i += 1;
	}
	return (j);
}
