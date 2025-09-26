/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42port...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 10:39:30 by grui-ant          #+#    #+#             */
/*   Updated: 2025/02/22 13:19:54 by psancio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putchar.c"

void	rush(int x, int y)
{
	int i;

	int j;

	i = 0;

	while(i < y)
	{
	 j = 0;
		while(j < x)
		{
	
			if ((i == 0 && j == 0) || (i == y-1  && j == x-1))
			{
				ft_putchar('/');
			}
			else if ((i == y-1 && j == 0) || (i == 0 && j == x-1))
			{
				ft_putchar('\\');
			}
			else if (i == 0 || i == y-1)
			{
				ft_putchar('*');
			}
			else if (j == 0 || j == x-1)
			{
				ft_putchar('*');
			}
			else
			{
				ft_putchar(' ');
			}
			j++;
		}
	ft_putchar('\n');
	i++;

	}
}
