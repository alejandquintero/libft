/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:37:25 by aquinter          #+#    #+#             */
/*   Updated: 2023/09/16 14:50:03 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[12] = "hello ";
	char	src[] = "world!";

	printf("strlcat%lu", strlcat(dest, src, sizeof(dest)));
	return (0);
}