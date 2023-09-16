/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:22:31 by aquinter          #+#    #+#             */
/*   Updated: 2023/09/15 23:11:33 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int	num;

	num = 97;
	printf("ORIGINAL: %d\n", isalpha(num));
	printf("MIO: %d", ft_isalpha(num));
	return (0);
}*/
