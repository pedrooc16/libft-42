/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:39:03 by pecosta-          #+#    #+#             */
/*   Updated: 2022/12/19 15:39:03 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//concactena multiplas strings numa nova string

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	char	*newstring;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	newstring = malloc(len1 + len2 + 1);
	if (!newstring)
		return (NULL);
	ft_strcpy(newstring, s1);
	ft_strcpy(newstring + len1, s2);
	return (newstring);
}

/*int main()
{
    char *s1 = "Hello, ?";
  char *s2 = "World! :)";
  char *result = ft_strjoin(s1, s2);
  printf("Result: %s\n", result);
}*/
