/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psancio- <psancio-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:57:56 by psancio-          #+#    #+#             */
/*   Updated: 2025/02/26 19:01:11 by psancio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	numberofdigits;

	numberofdigits = 0;
	while (*str)
	{
		numberofdigits++;
		str++;
	}
	return (numberofdigits);
}
/*int	main(void){

	char teste[] = "Ola";
	ft_strlen(teste);
	return 0;
}*/
