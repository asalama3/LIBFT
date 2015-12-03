/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:28:18 by asalama           #+#    #+#             */
/*   Updated: 2015/11/25 20:48:45 by asalama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int			i;
	char		*tmp;
	size_t		len;

	i = 0;
	len = ft_strlen(s1) + 1;
	tmp = (char *)malloc(len * sizeof(char));
	if (tmp == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		tmp[i] = s1[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}