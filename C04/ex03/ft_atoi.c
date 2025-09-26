/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psancio- <psancio-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:42:03 by psancio-          #+#    #+#             */
/*   Updated: 2025/03/12 14:32:18 by psancio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	converted;
	int	val;	

	i = 0;
	converted = 0;
	val = 1;
	while ((str[i] == ' ') || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			val *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			converted = (converted * 10) + (str[i] - '0');
		else
			return (converted * val);
		i++;
	}
	return (converted * val);
}
/*int main()
 {
 	printf("%d\n", ft_atoi("      \n\r---+--+1245acd987"));
 	printf("%d\n", ft_atoi("    \n\n\n--+3221434*!@58967"));
 }*/
