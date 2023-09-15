/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nano <nano@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:14:32 by nano              #+#    #+#             */
/*   Updated: 2023/09/14 23:21:41 by nano             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
/*
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
	ft_memcpy(dest, src+2, 3);
	dest[3] = '\0';
	printf("%s\n", dest);
	return (0);
}*/