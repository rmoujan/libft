/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:42:32 by rmoujan           #+#    #+#             */
/*   Updated: 2021/11/22 18:14:19 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

static char	*ft_copy(char const *s1, char const *s2, char *p)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		j++;
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	total;
	int				i;
	int				j;
	char			*p;

	if (!s1 || !s2)
		return (NULL);
	total = 0;
	i = 0;
	j = 0;
	total = ft_strlen(s1) + ft_strlen(s2) + 1;
	p = malloc((total) * sizeof(char));
	if (p == NULL)
		return (NULL);
	p = ft_copy(s1, s2, p);
	return (p);
}
/*
int main()
{
	char s1[]=" Hallo ";
	char s2[]="World in 1337 this is me";
	printf("%s \n",ft_strjoin(s1,s2));
	return (0);
}*/
