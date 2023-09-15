/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nano <nano@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:50:29 by nano              #+#    #+#             */
/*   Updated: 2023/09/14 21:11:57 by nano             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <strings.h>
//#include <stdio.h>

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
int	main(void)
{
    char    str[12] = "Hello world";
    printf("%s", str);
    ft_bzero(str, 1);
    printf("%s", str);
    return (0);
}*/