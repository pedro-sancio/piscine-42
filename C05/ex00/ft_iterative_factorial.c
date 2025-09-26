/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psancio- <psancio-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 10:23:41 by psancio-          #+#    #+#             */
/*   Updated: 2025/03/08 10:49:21 by psancio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	result = 1;
	i = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
/*int main()
{
    printf("Fatorial de 5: %d\n", ft_iterative_factorial(5));
    printf("Fatorial de 0: %d\n", ft_iterative_factorial(0));
    printf("Fatorial de -3: %d\n", ft_iterative_factorial(-3));
    printf("Fatorial de 12: %d\n", ft_iterative_factorial(12));

    return 0;
}*/
