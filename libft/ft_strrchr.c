/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:34:32 by aquinter          #+#    #+#             */
/*   Updated: 2023/09/16 22:56:39 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pos;

	pos = (char *)s;
	while (*s != '\0')
	{
		if (*s == (char)c)
			pos = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	if (*pos == (char)c)
		return (pos);
	return (NULL);
}
