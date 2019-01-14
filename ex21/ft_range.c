/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 20:08:20 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/10 13:12:56 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *ary;
	int i;
	int j;

	if ((max - min) <= 0)
		return (NULL);
	ary = (int*)malloc((max - min) * 4);
	i = 0;
	j = min;
	while (i < (max - min))
		ary[i++] = j++;
	return (ary);
}
