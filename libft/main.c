/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:37:25 by aquinter          #+#    #+#             */
/*   Updated: 2023/09/23 23:20:39 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// //#include <bsd/string.h>
// #include "libft.h"
// #include <ctype.h>
// #include <fcntl.h>

// // char	ft_transform(unsigned int i, char c)
// // {
// // 	if (i % 2 == 0)
// // 		return ft_tolower(c);
// // 	return ft_toupper(c);
// // }

// // void	ft_replace(unsigned int i, char *c)
// // {
// // 	if (i % 2 == 0)
// // 		*c = '4';
// // 	else
// // 		*c = '2';
// // }

// int	main(int argc, char* argv[])
// {
// 	if (argc == 0)
// 		return (0);
// 	if (!argv[0])
// 		return (0);

// // 	// char	dest[10] = "a";
// // 	//char	src[] = "lorem ipsum dolor sit amet";
// // 	//char str[] = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
// //     //char    s1[] = "lorem ipsum dolor sit amet";
// //     //char    s2[] = "dolor";
// // 		char    *ptr1;
// //     //char    *ptr2;

// // printf("-- ft_bzero --\n");
// // char    str[12] = "Hello world";
// // printf("%s", str);
// // ft_bzero(str, 1);
// // printf("%s", str);
// // printf("-- ft_bzero --\n");

// // printf("-- ft_isalnum --\n");
// // char    str[12] = "Hello world";
// // printf("%s", str);
// // ft_isalnum(str, 1);
// // printf("%s", str);
// // printf("-- ft_isalnum --\n");

// // printf("-- ft_isalpha --\n");
// // int	num;
// // num = 97;
// // printf("ORIGINAL: %d\n", isalpha(num));
// // printf("MIO: %d", ft_isalpha(num));
// // printf("-- ft_isalpha --\n");

// // printf("-- ft_isascii --\n");
// // int	n;
// // n = 58;
// // printf("ORIG: %d\n", isascii(n));
// // printf("MIO: %d\n", ft_isascii(n));
// // printf("-- ft_isascii --\n");

// // printf("-- ft_isdigit --\n");
// // int	n;
// // n = 49;
// // printf("ORIG: %d\n", isdigit(n));
// // printf("MIO: %d\n", ft_isdigit(n));
// // printf("-- ft_isdigit --\n");

// // printf("-- ft_isprint --\n");
// // int	n;
// // n = 126;
// // printf("ORIG: %d\n", isprint(n));
// // printf("MIO: %d\n", ft_isprint(n));
// // printf("-- ft_isprint --\n");


// // printf("-- ft_memcpy --\n");
// // char	src[] = "Hello world!";
// // char	dest[10] = "\0";
// // printf("%s\n", dest);
// // ft_memcpy(dest, src, 3);
// // printf("%s\n", dest);
// // printf("-- ft_memcpy --\n");

// // printf("-- ft_memmove --\n");
// // char	src[] = "hola";
// // char	dst[5];
// // printf("%s\n", dst);
// // ft_memmove(dst, src, sizeof(src));
// // printf("%s\n", dst);
// // printf("-- ft_memmove --\n");

// // printf("-- ft_memset --\n");
// // char	b[] = "Hola";
// // ft_memset(b, 65, 3);
// // printf("%s", b);
// // printf("-- ft_memset --\n");

// // printf("-- ft_strlcpy --\n");
// // char	dst[6]= "";
// // char	src[]= "lorem ipsum";
// // printf("%s\n", dst);
// // printf("Return: %lu\n", ft_strlcpy(dst, src, 0));
// // printf("-- ft_strlcpy --\n");

// // printf("-- ft_strlen --\n");
// // char	str[] = "8787";
// // printf("ORIG: %lu\n", strlen(str));
// // printf("MIO: %lu\n", ft_strlen(str));
// // printf("-- ft_strlen --\n");


// // 	// printf("-- ft_strlcat --\n");
// // 	// printf("dst before: %s\n", dest);
// // 	// printf("return value: %lu \n", ft_strlcat(dest, src, 1));
// // 	// printf("dst after: %s \n", dest);
// // 	// printf("-- ft_strlcat --\n");
// // 	// printf("-- ft_toupper --\n");
// // 	// printf("(a) -> %c | (z) -> %c | (&) -> %c \n", ft_toupper('a'), ft_toupper('z'), ft_toupper('&'));
// // 	// printf("-- ft_toupper --\n\n");
// // 	// printf("-- ft_tolower --\n");
// // 	// printf("(A) -> %c | (Z) -> %c | (&) -> %c \n", ft_tolower('A'), ft_tolower('Z'), ft_tolower('&'));
// // 	// printf("-- ft_tolower --\n\n");

// // 	// printf("-- ft_strchr --\n");
// // 	// printf("%s\n", ft_strchr(str, '\0'));
// // 	// printf("-- ft_strchr --\n\n");

// // 	// printf("-- ft_strrchr --\n");
// // 	// printf("%s\n", ft_strrchr(src, 't'));
// // 	// printf("-- ft_strrchr --\n\n");

// //     // printf("-- ft_strncmp --\n");
// // 	// printf("%d\n", ft_strncmp(s1, s2, 1));
// // 	// printf("-- ft_strncmp --\n\n");

// // 	// printf("-- ft_memchr --\n");
// // 	// printf("mine: %s\n", ft_memchr(str, '\0', sizeof(str)));
// // 	// printf("orig: %s\n", memchr(str, '\0', sizeof(str)));
// // 	// printf("-- ft_memchr --\n\n");

// // printf("-- ft_memcmp --\n");
// // printf("mine: %d\n", ft_memcmp(argv[1], argv[2], 4));
// // printf("ori: %d\n", memcmp(argv[1], argv[2], 4));
// // printf("-- ft_memcmp --\n\n");

// // 	// printf("-- ft_strnstr --\n");
// // 	// printf("mine: %s\n", ft_strnstr(s1, s2,15));
// // 	// printf("orig: %s\n", strnstr(s1, s2, 15));
// // 	// printf("-- ft_strnstr --\n\n");

// // 	// printf("-- ft_atoi --\n");
// // 	// printf("mine: %d\n", ft_atoi(argv[1]));
// // 	// printf("orig: %d\n", atoi(argv[1]));
// // 	// printf("-- ft_atoi --\n\n");

// // 	// printf("-- ft_calloc --\n");
// // 	// ptr1 = ft_calloc(5, sizeof(char));
// // 	// ptr2 = calloc(5, sizeof(char));
// // 	// printf("mine: %p\n", ptr1);
// // 	// printf("orig: %p\n", ptr2);
// // 	// free(ptr1);
// // 	// free(ptr2);
// // 	// printf("-- ft_calloc --\n\n");

// // 	// printf("-- ft_strdup --\n");
// // 	// ptr1 = ft_strdup(argv[1]);
// // 	// ptr2 = strdup(argv[1]);
// // 	// printf("mine: %p\n", ptr1);
// // 	// printf("orig: %p\n", ptr2);
// // 	// free(ptr1);
// // 	// free(ptr2);
// // 	// printf("-- ft_strdup --\n\n");

// // 	// printf("-- ft_substr --\n");
// // 	// ptr1 = ft_substr(argv[1], 5, 6);
// // 	// printf("res: %s\n", ptr1);
// // 	// free(ptr1);
// // 	// printf("-- ft_substr --\n\n");

// // printf("-- ft_strtrim --\n");
// // ptr1 = ft_strtrim(argv[1], argv[2]);
// // printf("res: %s\n", ptr1);
// // free(ptr1);
// // printf("-- ft_strtrim --\n\n");

// // 	// int		i;
// // 	// char	**ptr2;

// //  // ptr2 = ft_split(argv[1], 'c');
	
// // 	// i = 0;
// // 	// printf("-- ft_split --\n");
// // 	// while (ptr2[i] != '\0')
// // 	// {
// // 	// 	printf("Res: %s\n", ptr2[i]);
// // 	// 	i++;
// // 	// }
// // 	// i = 0;
// // 	// while (ptr2[i] != '\0')
// // 	// {
// // 	// 	free(ptr2[i]);
// // 	// 	i++;
// // 	// }
// // 	// free(ptr2);
// // 	// printf("-- ft_split --\n\n");

// // 	// printf("-- ft_itoa --\n\n");
// // 	// int	number = -233232;
// // 	// ptr1 = ft_itoa(number);
// // 	// printf("res: %s\n", ptr1);
// // 	// free(ptr1);
// // 	// printf("-- ft_itoa --\n");

// // 	printf("-- ft_strmapi --\n");
// // 	ptr1 = ft_strmapi("hello world!", ft_transform);
// // 	printf("res: %s\n", ptr1);
// // 	free(ptr1);
// // 	printf("-- ft_strmapi --\n");

// // printf("-- ft_striteri --\n");
// // ptr1 = argv[1];
// // printf("before: %s\n", ptr1);
// // ft_striteri(ptr1, ft_replace);
// // printf("after: %s\n", ptr1);
// // printf("-- ft_striteri --\n");

// 	// printf("-- ft_putchar_fd --\n");
// 	// int	f;
// 	// int	i;
	
// 	// f = open("test.txt", O_WRONLY | O_APPEND);
// 	// if (!f)
// 	// 	return (1);
// 	// while (argv[1][i] != '\0')
// 	// {
// 	// 	ft_putchar_fd(argv[1][i], f);
// 	// 	i++;
// 	// }			
// 	// ft_putchar_fd('\n', 1);
// 	// close(f);
// 	// printf("-- ft_putchar_fd --\n");

// 	// printf("-- ft_putstr_fd --\n");
// 	// int	f;
	
// 	// f = open("test.txt", O_WRONLY | O_APPEND);
// 	// if (!f)
// 	// 	return (1);
// 	// ft_putstr_fd(argv[1], f);
// 	// ft_putstr_fd(argv[1], 1);
// 	// close(f);
// 	// printf("-- ft_putstr_fd --\n");

// 	// printf("-- ft_putendl_fd --\n");
// 	// int	f;
	
// 	// f = open("test.txt", O_WRONLY | O_APPEND);
// 	// if (!f)
// 	// 	return (1);
// 	// ft_putendl_fd(argv[1], f);
// 	// ft_putendl_fd(argv[1], 1);
// 	// close(f);
// 	// printf("-- ft_putendl_fd --\n");

// 	// printf("-- ft_putnbr_fd --\n");
// 	// int	f;
// 	// int	nbr = -2147483648;
	
// 	// f = open("test.txt", O_WRONLY | O_APPEND);
// 	// if (!f)
// 	// 	return (1);
// 	// ft_putnbr_fd(nbr, f);
// 	// ft_putnbr_fd(nbr, 1);
// 	// close(f);
// 	// printf("-- ft_putnbr_fd --\n");

// 	// printf("-- ft_lstnew --\n");
// 	// char	str[] = "This is a test";
// 	// t_list	*list;
	
// 	// list = ft_lstnew(str);
// 	// printf("content: %s\n", list->content);
// 	// printf("next: %p\n", list->next);
// 	// free(list);
// 	// printf("-- ft_lstnew --\n");

// 	printf("-- ft_lsadd_front --\n");
// 	char	str[] = "This is a test";
// 	t_list	*list;
	
// 	list = ft_lsadd_front(str);
// 	printf("content: %s\n", list->content);
// 	printf("next: %p\n", list->next);
// 	free(list);
// 	printf("-- ft_lsadd_front --\n");
// 	return (0);
// }

