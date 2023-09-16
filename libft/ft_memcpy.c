/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:49:29 by aquinter          #+#    #+#             */
/*   Updated: 2023/09/16 00:18:52 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!n || dst == src)
		return (dst);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "Hello world!";
	char	dest[10] = "\0";

	// int	src[3] = {4, 6, 10};
	// int	dest[3] = {0, 0, 0};

	// int i = 0;

	// while (i < 3)
	// {
	// 	printf("%d\n", dest[i]);
	// 	i++;
	// }
	// i = 0;

	//ft_memcpy("", src, sizeof(src));
	//memcpy("", src, sizeof(src));

	// while (i < 3)
	// {
	// 	printf("%d\n", dest[i]);
	// 	i++;
	// }

	printf("%s\n", dest);
	ft_memcpy(dest, src, 3);
	dest[3] = '\0';
	printf("%s\n", dest);
	return (0);
}*/
