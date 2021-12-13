/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:58:21 by rmoujan           #+#    #+#             */
/*   Updated: 2021/11/24 19:34:28 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*p;
	unsigned int	len1;
	unsigned int	i;

	i = 0;
	p = NULL;
	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(""));
	len1 = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) && i <= len1)
		i++;
	while (ft_strchr(set, s1[len1]) && len1 >= i)
		len1--;
	p = ft_substr(s1, i, (len1 - i + 1));
	return (p);
}
