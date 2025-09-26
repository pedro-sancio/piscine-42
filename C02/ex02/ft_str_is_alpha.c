/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psancio- <psancio-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 09:01:11 by psancio-          #+#    #+#             */
/*   Updated: 2025/03/05 11:23:37 by psancio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main()
{
	printf("%d\n", ft_str_is_alpha("Hello"));  // Should print 1 (true)
    	printf("%d\n", ft_str_is_alpha("Hello123"));  // Should print 0 (false)
    	printf("%d\n", ft_str_is_alpha("123"));  // Should print 0 (false)
    	printf("%d\n", ft_str_is_alpha("abc"));  // Should print 1 (true)

    return 0;
}*/
