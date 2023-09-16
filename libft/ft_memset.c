/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:20:55 by aquinter          #+#    #+#             */
/*   Updated: 2023/09/15 23:15:38 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = b;
	while (i < len)
	{
		a[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
int	main(void)
{
	//int		b[3] = {2, 4, 6};
	//int		i;
	char	b[] = "Hola";
	ft_memset(b, 65, 3);
	
	//i = 0;
	//while (i < 3)
	//{
	//	printf("%d\n", b[i]);
	//	i++;
	//}
	printf("%s", b);
	return (0);
}*/
