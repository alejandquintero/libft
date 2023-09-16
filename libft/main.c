/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:37:25 by aquinter          #+#    #+#             */
/*   Updated: 2023/09/16 20:40:34 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"
#include <ctype.h>

int	main(void)
{
	// char	dest[10] = "a";
	//char	src[] = "lorem ipsum dolor sit amet";
	char str[] = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";

	// printf("-- ft_strlcat --\n");
	// printf("dst before: %s\n", dest);
	// printf("return value: %lu \n", ft_strlcat(dest, src, 1));
	// printf("dst after: %s \n", dest);
	// printf("-- ft_strlcat --\n");
	// printf("-- ft_toupper --\n");
	// printf("(a) -> %c | (z) -> %c | (&) -> %c \n", ft_toupper('a'), ft_toupper('z'), ft_toupper('&'));
	// printf("-- ft_toupper --\n\n");
	// printf("-- ft_tolower --\n");
	// printf("(A) -> %c | (Z) -> %c | (&) -> %c \n", ft_tolower('A'), ft_tolower('Z'), ft_tolower('&'));
	// printf("-- ft_tolower --\n\n");

	printf("-- ft_strchr --\n");
	printf("%s\n", ft_strchr(str, '\0'));
	printf("-- ft_strchr --\n\n");
	return (0);
}