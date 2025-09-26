/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psancio- <psancio-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:00:38 by psancio-          #+#    #+#             */
/*   Updated: 2025/03/06 13:18:19 by psancio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char s1[] = "Ola";
	char s2[] = "Hello";
	
	printf("numero de digitos s1: %d\n",ft_strlen(s1));
	printf("numero de digitos s2: %d\n",ft_strlen(s2));

	return(0);
}*/
