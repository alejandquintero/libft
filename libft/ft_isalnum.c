/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:05:11 by aquinter          #+#    #+#             */
/*   Updated: 2023/09/15 23:11:21 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int	num;

	num = 48;
	printf("ORIGINAL: %d\n", isalnum(num));
	printf("MIO: %d", ft_isalnum(num));
	return (0);
}*/
