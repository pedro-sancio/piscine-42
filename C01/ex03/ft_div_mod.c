/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psancio- <psancio-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:27:41 by psancio-          #+#    #+#             */
/*   Updated: 2025/02/28 11:10:33 by psancio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}


int	main(void)
{
	int a = 11, b = 3;
    	int div, mod;
	
	ft_div_mod(a, b, &div, &mod);
	  printf("Resultado da divisão: %d\n", div);
    printf("Resto da divisão: %d\n", mod);

}
