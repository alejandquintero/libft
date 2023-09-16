/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:40:54 by aquinter          #+#    #+#             */
/*   Updated: 2023/09/15 23:10:59 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}
/*
#include <strings.h>
#include <stdio.h>
int	main(void)
{
    char    str[12] = "Hello world";
    printf("%s", str);
    ft_bzero(str, 1);
    printf("%s", str);
    return (0);
}*/
