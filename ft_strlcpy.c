/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:39:06 by pecosta-          #+#    #+#             */
/*   Updated: 2022/12/19 15:39:06 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	z;

	i = 0;
	z = 0;
	while (src[z])
		z++;
	if (size > 0)
	{
		while (src[i] && (i + 1) < size)
		{	
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (z);
}

/*int main(void)
{
	char a[20] = "rosa";
	char b[20] = "fernandes";
	char c[20] = "rosa";
	char d[20] = "fernandes";
	printf("%lu\n", strlcpy(a, b, 2));
	printf("%s\n", a);
	printf("%lu\n", ft_strlcpy(c, d, 2));
	printf("%s\n", c);
}*/