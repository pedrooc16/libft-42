/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:38:33 by pecosta-          #+#    #+#             */
/*   Updated: 2022/12/19 15:38:33 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memcpy function copies n characters from the 
//source object to the destination object.
//If copying takes place between objects that overlap, 
//the behavior is undefined. 
//Both memcpy and memmove does not check the terminating null character,
//The behavior of memcpy or memmove can be undefined 
//if you try to access the destination and source buffer beyond their length.

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	if (!dest && !src)
		return (NULL);
	dst1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	while (n > 0)
	{
		*dst1 = *src1;
		dst1++;
		src1++;
		n--;
	}
	return (dest);
}

/*int main()
{
   char a[10] = "hello, ?";
   char b[] = "Boa noite, que horas são?";
   memcpy(a, b, sizeof(char) * 27);
   printf("%s\n", a);
   char c[10] = "hello, ?";
   char d[] = "Boa noite, que horas são?";
   ft_memcpy(c, d, sizeof(char) * 27);
   printf("%s\n", c);
}

int main()
{
   int x[10] = {1,2,3,4,5,6,7,8,9,10};
   memcpy(x+5, x, 4);
   for (int i = 0; i < 10; i++)
   printf("%d", x[i]);
    return 0;
}*/