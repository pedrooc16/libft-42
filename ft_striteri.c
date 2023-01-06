/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:38:58 by pecosta-          #+#    #+#             */
/*   Updated: 2022/12/19 15:38:58 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	f(unsigned int pos, char *c)
{
	static unsigned int i = 0;
	
	pos == i;
	*c = i + 48;
	i++;
}
int main()
{
    char str[] = "hello";
    ft_striteri(str, *f);
    printf("%s\n", str);
}*/