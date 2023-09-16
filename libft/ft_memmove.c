/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:58:16 by aquinter          #+#    #+#             */
/*   Updated: 2023/09/16 00:57:29 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!len || dst == src)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (len--)
		((char *)dst)[len] = ((char *)src)[len];
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[] = "hola";
	char	dst[5];

	printf("%s\n", dst);
	ft_memmove(dst, src, sizeof(src));
	printf("%s\n", dst);
	return (0);
}*/
