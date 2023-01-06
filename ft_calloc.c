/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 23:23:27 by pecosta-          #+#    #+#             */
/*   Updated: 2022/12/27 23:23:27 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	str = (char *)malloc(nmemb * size);
	if (!str)
		return (NULL);
	ft_memset(str, 0, size * nmemb);
	return (str);
}

/*int main(void)
{
	int *array;
	array = ft_calloc(100, sizeof(int));
	
	for (int i = 0; i <= 100; i++)
	{
		printf("%d\n", array[i]);
	}
}
*/