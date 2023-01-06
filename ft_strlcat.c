/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:39:11 by pecosta-          #+#    #+#             */
/*   Updated: 2022/12/19 15:39:11 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	z;

	i = 0;
	z = 0;
	while (dst[i] && i < size)
		i++;
	while (src[z] && i + z + 1 < size)
	{
		dst[i + z] = src[z];
		z++;
	}
	if (i < size)
		dst[i + z] = '\0';
	return (i + ft_strlen(src));
}

/*int main()
{
    char a[40] = "hello";
    char * b = "bon jour";
    printf("%ld\n", ft_strlcat(a, b, -102512452151));
    printf("%s", a);
} 
<string.h> concatenate string to an specific size;
 * dst buffer caps the number of characters copied to its size, minus NULL;
 * it returns the length of dst + src strings (ignoring both null characters);
 * (22)if dstsize is less than the dst buffer, it will return a truncated answer;
 * (24)if dstsize is bigger than dst buffer, it will continue to this step;
 * (24)room for the NULL should be included in dstsize (dstsize - 1);
 * (29)if dstsize is one, it guarantees my copy is NULL terminated;
 * (abort trap 6) if the destination doesn't have enough memory space;
 */