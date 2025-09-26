/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psancio- <psancio-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 10:50:46 by psancio-          #+#    #+#             */
/*   Updated: 2025/03/08 11:23:50 by psancio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

/*int main()
{
    printf("Fatorial de 5: %d\n", ft_recursive_factorial(5));
    printf("Fatorial de 0: %d\n", ft_recursive_factorial(0));
    printf("Fatorial de -3: %d\n", ft_recursive_factorial(-3));
    printf("Fatorial de 12: %d\n", ft_recursive_factorial(12));

    return 0;
}*/
