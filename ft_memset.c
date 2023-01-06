/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:32:28 by pecosta-          #+#    #+#             */
/*   Updated: 2022/12/29 15:32:28 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//The C library function void *memset(void *str, 
//int c, size_t n) copies the character c (an unsigned char) 
//to the first n characters of the string pointed to, by the argument str.

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*b1;

	b1 = (unsigned char *)s;
	while (len--)
	{
		*b1 = (unsigned char)c;
		b1++;
	}
	return (s);
}

/*int main()
{
    char p[20] = "hello, tudo bem?";
    ft_memset(p, '$', 30);
    printf("%s\n", p);
    char b[20] = "hello, tudo bem?";
    memset(b, '$', sizeof(b) + 1);
    printf("%s", b);
}*/