/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:38:37 by pecosta-          #+#    #+#             */
/*   Updated: 2022/12/19 15:38:37 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//copy from end to start in case memory overlaps   
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	if (!dest && !src)
		return (NULL);
	dst1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	if (dst1 > src1)
	{
		while (n--)
			dst1[n] = src1[n];
	}
	else
	{
		while (n--)
		{
			*dst1 = *src1;
			dst1++;
			src1++;
		}
	}
	return (dest);
}
/* int main(void)
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;
	dest = src + 1;
	// memmove(src, dest, 8);
	// printf("%s\n", dest);
	ft_memmove(src, dest, 8);
	printf("%s", dest);	
} */