/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 23:08:34 by aquinter          #+#    #+#             */
/*   Updated: 2023/09/18 23:46:57 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s2;

	len = ft_strlen(s1) + 1;
	s2 = malloc(len * sizeof(char));
	if (!s2)
		return (NULL);
	s2 = ft_memcpy(s2, s1, len);
	s2[len] = '\0';
	return (s2);
}