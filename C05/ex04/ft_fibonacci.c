/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psancio- <psancio-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:34:17 by psancio-          #+#    #+#             */
/*   Updated: 2025/03/10 14:55:15 by psancio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
	{
		return (-1);
	}
	if (index < 2)
	{
		return (index);
	}
	result = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (result);
}
/*
int main()
{
    int index = 4;
    
    int fibonacci_value = ft_fibonacci(index);
    
        printf("Fibonacci no índice %d é: %d\n", index, fibonacci_value);
    
    return 0;
}*/
