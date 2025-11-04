/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarbosa <nbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:20:59 by nbarbosa          #+#    #+#             */
/*   Updated: 2025/10/31 09:16:18 by nbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	i;
	int	in_word;

	in_word = 0;
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static void	ft_wordindex(const char *s, char c, int *start, int *end)
{
	while (s[*start] == c)
		(*start)++;
	*end = *start;
	while (s[*end] && s[*end] != c)
		(*end)++;
	return ;
}

static char	*ft_stdup(const char *s, char c, int *start, int *end)
{
	char	*strtocpy;
	int		x;

	x = 0;
	ft_wordindex(s, c, start, end);
	strtocpy = malloc(sizeof(char) * (*end - *start) + 1);
	if(!strtocpy)
		return (0);
	while (x < *end - *start)
	{
		strtocpy[x] = s[*start + x];
		x++;
	}
	strtocpy[x] = '\0';
	x = 0;
	return (strtocpy);
}

char	**ft_split(char const *s, char c)
{
	int		end;
	int		start;
	char	**res;
	int		index;
	int		count;

	index = 0;
	start = 0;
	end = 0;
	count = 0;
	count = ft_count_words(s, c);
	res = malloc(sizeof(char *) * (count + 1));
	if (!res)
		return (0);
	while (index < count)
	{
		res[index] = ft_stdup(s, c, &start, &end);
		index++;
		start = end;
	}
	res[count] = NULL;
	return (res);
}

/*
void    ft_free_split(char **res)
{
    int i = 0;
    while (res[i])
    {
        free(res[i]);
        i++;
    }
    free(res);
}

int main (void)
{
	char const *s = "bonjour les amis de 42";
	char c = ' ';
	int count;
	count = ft_count_words(s, c);
	char **res = ft_split(s, c);

		printf("%s\n", res[0]);
		printf("%s\n", res[1]);
		printf("%s\n", res[2]);
		printf("%s\n", res[3]);
		printf("%s\n", res[4]);
		printf("%s\n", res[5]);
		

		ft_free_split(res);
		
	return 0;
}*/