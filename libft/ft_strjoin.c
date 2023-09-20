/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:24:46 by aquinter          #+#    #+#             */
/*   Updated: 2023/09/20 23:07:10 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	char	*s3;

	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	s3 = malloc(total_len * sizeof(char));
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1, total_len);
	ft_strlcat(s3, s2, total_len);
	return (s3);
}
