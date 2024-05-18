/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:46:58 by pgomes            #+#    #+#             */
/*   Updated: 2024/05/15 12:03:09 by pgomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = 0;
	while (dest[len] != '\0' && len < size)
		len++;
	if (len < size)
	{
		i = 0;
		while (dest[len] != '\0' && src[i] != '\0' && len < size)
		{
			dest[len] = src[i];
			len++;
			i++;
		}
		dest[len] = '\0';
	}
	return (ft_strlen(src) + size);
}
