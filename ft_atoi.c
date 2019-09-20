/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarkita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 13:26:00 by tmarkita          #+#    #+#             */
/*   Updated: 2019/09/20 14:03:40 by tmarkita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int						s;
	unsigned long long int	n;
	long long int			t;

	s = 1;
	n = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		s = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str != '\0' && ft_isdigit(*str))
	{
		if (n > 9223372036854775807 && s == -1)
			return (0);
		if (n > 9223372036854775807 && s == 1)
			return (-1);
		n = (n * 10) + (*str - '0');
		str++;
	}
	t = (long long int)n * s;
	return (t);
}
