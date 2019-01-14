/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/08 15:43:00 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/13 19:33:32 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if ((nb > 12) || (nb < 0))
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
