/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:43:19 by asalama           #+#    #+#             */
/*   Updated: 2015/12/04 16:02:25 by asalama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	int 		i;
	char 	**tab;
	char	buf[] = "salut****";

	i = 0;
	tab = ft_strsplit(buf, '*');
	while (tab[i] != NULL)
	{
		printf("[%s]\n", tab[0]);
		printf("[%s]\n", tab[1]);
		i++;
	}
	return (0);
}