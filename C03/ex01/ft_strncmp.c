/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psancio- <psancio-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:02:56 by psancio-          #+#    #+#             */
/*   Updated: 2025/03/06 09:50:11 by psancio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (0);
}
/*int main() {
    char *str1 = "Hello";
    char *str2 = "Helloo";
    unsigned int n = 5;
	
 int result = ft_strncmp(str1, str2, n);

      if (result == 0) {
        printf("As strings são iguais até o limite de %u caracteres.\n", n);
    } else if (result < 0) {
        printf("A primeira string é menor.\n");
    } else {
        printf("A primeira string é maior.\n");
    }

    return 0;
}*/
