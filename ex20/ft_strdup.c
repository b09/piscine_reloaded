/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 18:53:59 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/09 19:48:47 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src)
{
	int i;

	i = 0;
	while (*src++ != '\0')
		++i;
	return (i);
}

char	*ft_strcpy(char *src, char *dest)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *c;

	c = (char*)malloc(ft_strlen(src) + 1);
	ft_strcpy(src, c);
	return (c);
}
