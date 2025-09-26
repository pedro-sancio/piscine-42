/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psancio- <psancio-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 11:19:23 by psancio-          #+#    #+#             */
/*   Updated: 2025/02/27 18:05:28 by psancio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

//void	ft_print_comb(void);

//void	ft_print_text(int a, int b, int c);

/*int	main(void)
{
	ft_print_comb();
}*/

void	ft_print_text(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a < '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_print_text(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
