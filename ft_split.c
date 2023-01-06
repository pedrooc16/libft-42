/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:28:24 by pecosta-          #+#    #+#             */
/*   Updated: 2022/12/20 13:28:24 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//count words para saber o tamanho do two dimensional array

static int	word_count(char const *s, char c)
{
	int	counter;
	int	word_exists;
	int	words;

	counter = 0;
	words = 0;
	while (s[counter] != '\0')
	{
		word_exists = 0;
		while (s[counter] == c && s[counter] != '\0')
			counter++;
		while (s[counter] != c && s[counter] != '\0')
		{
			word_exists = 1;
			counter++;
		}
		if (word_exists == 1)
			words++;
	}
	return (words);
}
// count characters in every single word 

static int	get_size(char const *s, char c, int counter)
{
	int	size;

	size = 0;
	while (s[counter] == c && s[counter] != '\0')
		counter++;
	while (s[counter] != c && s[counter] != '\0')
	{
		counter++;
		size++;
	}
	return (size);
}

static char	**make_split(char **array, char c, int words, char const *s)
{
	int	size;
	int	counter;
	int	index;
	int	seccounter;

	counter = 0;
	index = 0;
	while (s[counter] != '\0' && index < words)
	{
		seccounter = 0;
		while (s[counter] == c && s[counter] != '\0')
			counter++;
		size = get_size(s, c, counter);
		array[index] = (char *) malloc ((size + 1) * sizeof(char));
		if (!array[index])
			return (NULL);
		while (s[counter] != c && s[counter] != '\0')
			array[index][seccounter++] = s[counter++];
		array[index][seccounter] = '\0';
		index++;
	}
	array[index] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**array;

	if (s == NULL)
		return (NULL);
	words = word_count(s, c);
	array = (char **) malloc ((words + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	array = make_split(array, c, words, s);
	return (array);
}

/*int main(void)
{
	int i = 0;
	char	*s = "***Pedro***Costa***Mesquita****da**Conceicao****";
	char	**splt;
	splt = ft_split(s, '*');
	 while (splt[i])
	{
		printf("%s\n", splt[i]);
		i++;
	}
	return (0);
}*/