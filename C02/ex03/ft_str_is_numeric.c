/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psancio- <psancio-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:10:45 by psancio-          #+#    #+#             */
/*   Updated: 2025/03/05 10:23:20 by psancio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str [i] < '0' || str [i] > '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main()
{
	char	s[4] = "Ol1";
	char	n[4] = "123";

	printf("%s - %d\n", s, ft_str_is_numeric(s));
	printf("%s - %d\n", n, ft_str_is_numeric(n));
}*/
