/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovolcov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 15:24:48 by ovolcov           #+#    #+#             */
/*   Updated: 2017/11/20 15:24:49 by ovolcov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if ((ft_isdigit(c) == 1) || (ft_isalpha(c) == 1))
		return (1);
	else
		return (0);
}
