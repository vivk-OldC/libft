/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovolcov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 16:27:11 by ovolcov           #+#    #+#             */
/*   Updated: 2017/11/20 16:27:14 by ovolcov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (s == NULL || start > ft_strlen(s))
		return (NULL);
	if ((ptr = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	while (i < len && s[start] != '\0')
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
