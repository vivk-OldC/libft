/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovolcov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 16:22:47 by ovolcov           #+#    #+#             */
/*   Updated: 2017/11/20 16:22:54 by ovolcov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s != NULL && f != NULL)
	{
		j = ft_strlen(s);
		while (i < j)
		{
			(*f)(s);
			s++;
			i++;
		}
	}
}
