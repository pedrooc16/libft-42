/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:28:27 by pecosta-          #+#    #+#             */
/*   Updated: 2022/12/20 13:28:27 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strdup is a function that creates a copy of a given string. 
//It stands for "string duplicate."

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

	str = malloc(ft_strlen(s) + 1);
	if (!str)
	{
		return (NULL);
	}
	ft_strlcpy(str, s, ft_strlen(s) + 1);
	return (str);
}

/*int main (void)
{
	//char str[] = "Bon jour, comme sa va";
    //printf("%s\n", ft_strdup(str));
    //printf("%s", strdup(str));

    char *s1 = ft_strdup("coucou");
	char *s2 = strdup("coucou");
	printf("%d\n", strcmp(s1, "coucou"));
	printf("%d\n", strcmp(s2, "coucou"));
}*/