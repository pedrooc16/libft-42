/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:39:21 by pecosta-          #+#    #+#             */
/*   Updated: 2022/12/19 15:39:21 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strnstr function is used to search for a given substring within another string
//The len parameter is the maximum number of characters to s
//earch within the haystack string
//The function returns a pointer to the first occurrence of the 
//needle substring within the haystack string, 
//or NULL if the substring is not found.

////para evitar procurar memoria a frente-so se a lenght for
// maior que i é que percorre  

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	z;

	i = 0;
	if (*little == 0)
		return ((char *)big);
	while (big[i] && len > i)
	{
		z = 0;
		while (big[i + z] == little[z] && (len > z + i))
		{
			if (little[z + 1] == '\0')
				return ((char *)big + i);
			z++;
		}
		i++;
	}
	return (NULL);
}

/*int main()
{
    char * s = "haystack";
    char * n = "paystack";
    printf("%s", ft_strnstr(s, n, 4));
   
}*/