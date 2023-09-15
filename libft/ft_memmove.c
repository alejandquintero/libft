/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nano <nano@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 23:13:48 by nano              #+#    #+#             */
/*   Updated: 2023/09/14 23:35:37 by nano             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;
	size_t	i;

	i = 0;
	while (i < n)
	{
		tmp[i] = ((char *)src)[i];
		i++;
	}
	
	printf("%s", tmp);
	return (dest);
}


int	main(void)
{
	char	src[15] = "Hello world!";
	// char	dest[15] = "\0";

	// int	src[3] = {4, 6, 10};
	// int	dest[3] = {0, 0, 0};

	// int i = 0;

	// while (i < 3)
	// {
	// 	printf("%d\n", dest[i]);
	// 	i++;
	// }
	// i = 0;

	//ft_memmove(dest, src, 5);
	//memcpy(src + 7, src, 7);

	// while (i < 3)
	// {
	// 	printf("%d\n", dest[i]);
	// 	i++;
	// }

	printf("%s\n", src);
	// memcpy(dest, src, 3);
	//memcpy(src + 7, src, 7);
	memmove(src + 7, src, 7);
	printf("%s\n", src);
	return (0);
}