/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:19:34 by pecosta-          #+#    #+#             */
/*   Updated: 2023/01/04 15:13:08 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
	long long	nbr;

	sign = 1;
	nbr = 0;
	while (*str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f'
		|| *str == '\r' || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str > 47 && *str < 58)
	{
		nbr = nbr * 10;
		nbr += (sign * (*(str++) - 48));
		if (nbr > 2147483647)
			return (-1);
		if (nbr < -2147483648)
			return (0);
	}
	return (nbr);
}

/*int main()
{
    char rosa[] = "  r4134cs";
    printf("%d\n", ft_atoi(rosa));
    printf("%d", atoi(rosa));
}*/
