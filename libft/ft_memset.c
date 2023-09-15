/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nano <nano@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 21:33:04 by nano              #+#    #+#             */
/*   Updated: 2023/09/14 21:14:01 by nano             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = s;
	while (i < n)
	{
		a[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{	
	char str[25] = "Hello world";
	ft_memset(str, 45, 1);
	//printf("mio%p\n", ft_memset(str, 45, 1));
	//printf("org%p", memset(str, 45, 1));
	return (0);
}*/