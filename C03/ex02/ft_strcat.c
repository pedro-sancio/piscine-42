/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psancio- <psancio-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 09:52:00 by psancio-          #+#    #+#             */
/*   Updated: 2025/03/11 09:22:01 by psancio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	counter;
	int	counterv2;

	counter = 0;
	counterv2 = 0;
	while (dest[counter] != '\0')
	{
		counter++;
	}
	while (src[counterv2] != '\0')
	{
		dest[counter] = src[counterv2];
		counter++;
		counterv2++;
	}
	dest[counter] = '\0';
	return (dest);
}
/*int main() {
    char dest[100] = "Hello, ";
    char src[] = "World!";

    ft_strcat(dest, src);

    printf("Resultado %s\n", dest);

    return 0;
}*/
