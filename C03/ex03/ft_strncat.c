/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psancio- <psancio-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:57:29 by psancio-          #+#    #+#             */
/*   Updated: 2025/03/08 09:39:20 by psancio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned char	*dest_ptr;
	unsigned int	i;

	i = 0;
	dest_ptr = (unsigned char *)dest;
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (i < nb && *src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		i++;
	}
	*dest_ptr = '\0';
	return (dest);
}

/*int main() {
    char dest[50] = "Olá, ";
    char src[] = "mundo!";
    
    printf("Antes: %s\n", dest);
    
    ft_strncat(dest, src, 3);
    
    printf("Depois: %s\n", dest);
    
    return 0;
}*/
