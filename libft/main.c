/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:37:25 by aquinter          #+#    #+#             */
/*   Updated: 2023/09/18 23:37:12 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>
// #include "libft.h"
// #include <ctype.h>

// int	main(int argc, char* argv[])
// {
// 	if (argc == 0)
// 		return (0);
	
// 	// char	dest[10] = "a";
// 	//char	src[] = "lorem ipsum dolor sit amet";
// 	//char str[] = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
//     //char    s1[] = "lorem ipsum dolor sit amet";
//     //char    s2[] = "dolor";
//     char    *ptr1;
//     char    *ptr2;


// 	// printf("-- ft_strlcat --\n");
// 	// printf("dst before: %s\n", dest);
// 	// printf("return value: %lu \n", ft_strlcat(dest, src, 1));
// 	// printf("dst after: %s \n", dest);
// 	// printf("-- ft_strlcat --\n");
// 	// printf("-- ft_toupper --\n");
// 	// printf("(a) -> %c | (z) -> %c | (&) -> %c \n", ft_toupper('a'), ft_toupper('z'), ft_toupper('&'));
// 	// printf("-- ft_toupper --\n\n");
// 	// printf("-- ft_tolower --\n");
// 	// printf("(A) -> %c | (Z) -> %c | (&) -> %c \n", ft_tolower('A'), ft_tolower('Z'), ft_tolower('&'));
// 	// printf("-- ft_tolower --\n\n");

// 	// printf("-- ft_strchr --\n");
// 	// printf("%s\n", ft_strchr(str, '\0'));
// 	// printf("-- ft_strchr --\n\n");

// 	// printf("-- ft_strrchr --\n");
// 	// printf("%s\n", ft_strrchr(src, 't'));
// 	// printf("-- ft_strrchr --\n\n");

//     // printf("-- ft_strncmp --\n");
// 	// printf("%d\n", ft_strncmp(s1, s2, 1));
// 	// printf("-- ft_strncmp --\n\n");

// 	// printf("-- ft_memchr --\n");
// 	// printf("mine: %s\n", ft_memchr(str, '\0', sizeof(str)));
// 	// printf("orig: %s\n", memchr(str, '\0', sizeof(str)));
// 	// printf("-- ft_memchr --\n\n");

// 	// printf("-- ft_strnstr --\n");
// 	// printf("mine: %s\n", ft_strnstr(s1, s2,15));
// 	// printf("orig: %s\n", strnstr(s1, s2, 15));
// 	// printf("-- ft_strnstr --\n\n");

// 	// printf("-- ft_atoi --\n");
// 	// printf("mine: %d\n", ft_atoi(argv[1]));
// 	// printf("orig: %d\n", atoi(argv[1]));
// 	// printf("-- ft_atoi --\n\n");

// 	// printf("-- ft_calloc --\n");
// 	// ptr1 = ft_calloc(5, sizeof(char));
// 	// ptr2 = calloc(5, sizeof(char));
// 	// printf("mine: %p\n", ptr1);
// 	// printf("orig: %p\n", ptr2);
// 	// free(ptr1);
// 	// free(ptr2);
// 	// printf("-- ft_calloc --\n\n");

// 	printf("-- ft_strdup --\n");
// 	ptr1 = ft_strdup(argv[1]);
// 	ptr2 = strdup(argv[1]);
// 	printf("mine: %p\n", ptr1);
// 	printf("orig: %p\n", ptr2);
// 	free(ptr1);
// 	free(ptr2);
// 	printf("-- ft_strdup --\n\n");
		
// 	return (0);
// }