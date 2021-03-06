/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/08 17:53:55 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/08 18:07:04 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	while ((i * i) < nb)
		++i;
	if ((i * i) == nb)
		return (i);
	else
		return (0);
}
