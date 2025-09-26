/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psancio- <psancio-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:56:16 by psancio-          #+#    #+#             */
/*   Updated: 2025/03/13 14:02:17 by psancio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	num;

	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	num = 2;
	if (nb > 3)
	{
		while ((num * num) <= nb)
		{
			if ((num * num) == nb)
				return (num);
			num++;
		}
	}
	return (0);
}

/*#include <stdio.h>
int main()
{
    int nb = 49;
    
    int sqrt_value = ft_sqrt(nb);
    
        printf("A raiz quadrada inteira de %d é: %d\n", nb, sqrt_value);
    
    return 0;
}*/
