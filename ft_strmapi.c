/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:39:15 by pecosta-          #+#    #+#             */
/*   Updated: 2022/12/19 15:39:15 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//applies the function f to each character of the string s 
//to create a new string using malloc
//returns the string created from the successive applications 
//- null if the allocation fails

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)malloc(ft_strlen(s) +1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	b(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return(str);
}
int main()
{
	char str[] = "abcdef";
	char *str2;
	str2 = ft_strmapi(str, *b);
	printf("%s\n", str2);
}*/
