/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psancio- <psancio-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:00:30 by psancio-          #+#    #+#             */
/*   Updated: 2025/03/13 15:32:07 by psancio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	k;

	j = 0;
	i = argc - 1;
	while (i > j)
	{
		k = 0;
		while (argv[i][k] != '\0')
		{
			write(1, &argv[i][k], 1);
			k++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
