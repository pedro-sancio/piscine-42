/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psancio- <psancio-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:14:23 by psancio-          #+#    #+#             */
/*   Updated: 2025/03/13 13:56:45 by psancio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (nb > i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	else
	{
		while (1)
		{
			if (ft_is_prime(++nb))
				return (nb);
		}
	}
}
/*
int	main(void)
{
	printf("%d\n", ft_find_next_prime(17));
	printf("%d\n", ft_find_next_prime(9));
	printf("%d\n", ft_find_next_prime(-6));
	return (0);
}*/
