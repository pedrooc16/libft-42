/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:39:23 by pecosta-          #+#    #+#             */
/*   Updated: 2022/12/27 17:39:23 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Set all bytes in buffer to zero

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n--)
	{
		*ptr++ = 0;
	}
}

/*int main (void)
{
 	char s[20] = "pedro";
	char b[20] = "joana";
	bzero(s,6);
	printf("%s", s);
	ft_bzero(b, 6);
	printf("%s", b);
}*/
