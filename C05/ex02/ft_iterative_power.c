/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psancio- <psancio-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 11:28:10 by psancio-          #+#    #+#             */
/*   Updated: 2025/03/08 12:09:29 by psancio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	result = 1;
	i = 0;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/*int main()
{
    printf("2^3 = %d\n", ft_iterative_power(2, 3));
    printf("5^0 = %d\n", ft_iterative_power(5, 0));
    printf("0^0 = %d\n", ft_iterative_power(0, 0));
    printf("3^-2 = %d\n", ft_iterative_power(3, -2));
    printf("4^5 = %d\n", ft_iterative_power(4, 5));

    return 0;
}*/
