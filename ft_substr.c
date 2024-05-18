/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:41:06 by pgomes            #+#    #+#             */
/*   Updated: 2024/05/16 15:52:12 by pgomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;

	d = (char *)malloc(sizeof(*d) * len + 1);
	if (!d)
		return (NULL);
	ft_strlcpy(d, s + start, len);
	d[len] = '\0';
	return (d);
}	
