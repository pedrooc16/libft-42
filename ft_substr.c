/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 22:58:49 by pecosta-          #+#    #+#             */
/*   Updated: 2022/12/27 22:58:49 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The substring begins at index ’start’ and is of
//maximum size of ’len’ 

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*aux;

	if (!s)
		return (NULL);
	i = 0;
	if (len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
	{
		aux = (char *)malloc(sizeof(*s));
		*aux = '\0';
		return (aux);
	}
	aux = (char *)malloc(sizeof(*s) * (len + 1));
	if (!aux)
		return (NULL);
	while (i < len)
	{
		aux[i] = s[start + i];
		i++;
	}
	aux[i] = '\0';
	return (aux);
}

/*int main(void)
{
	char *c ="pedro conceicao";
	printf("%s\n", ft_substr(c, 10, 5));
}
*/
