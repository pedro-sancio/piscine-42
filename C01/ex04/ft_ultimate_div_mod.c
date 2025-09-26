/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psancio- <psancio-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:06:40 by psancio-          #+#    #+#             */
/*   Updated: 2025/02/26 18:57:31 by psancio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

/*int	main(void)
{
	int a, b;

	a = 10;
	b = 3;
	
	ft_ultimate_div_mod(&a, &b);
	printf("divisao: %d\n", a);
	printf("resto: %d\n", b);

	return 0;

}*/
