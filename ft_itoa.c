/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 00:07:35 by pecosta-          #+#    #+#             */
/*   Updated: 2022/12/29 00:07:35 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countdigits(long n)
{
	int	d;

	if (n < 0)
		d = 1;
	else
		d = 0;
	while (1)
	{
		n = n / 10;
		d++;
		if (n == 0)
			break ;
	}
	return (d);
}

char	*ft_itoa(int n)
{
	int		d;
	long	nn;
	char	*ret;

	nn = (long)n;
	d = countdigits(nn);
	ret = malloc((d + 1) * sizeof(char));
	if (!ret)
		return (0);
	if (nn < 0)
	{
		ret[0] = '-';
		nn = nn * -1;
	}
	ret[d] = '\0';
	while (1)
	{
		ret[d - 1] = nn % 10 + '0';
		nn = nn / 10;
		d--;
		if (nn == 0)
			break ;
	}
	return (ret);
}

/*int main()
{
	long  i = 266335;
	printf("%s\n", ft_itoa(i));
}*/